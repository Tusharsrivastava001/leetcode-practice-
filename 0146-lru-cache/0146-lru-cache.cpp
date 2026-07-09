class LRUCache {
public:

    class Node {
    public:
        int key;
        int val;
        Node* prev;
        Node* next;

        Node(int k, int v) {
            key = k;
            val = v;
            prev = nullptr;
            next = nullptr;
        }
    };

    unordered_map<int, Node*> cache;
    Node *head, *tail;
    int cap;

    LRUCache(int capacity) {
        cap = capacity;

        // Dummy head and tail
        head = new Node(-1, -1);
        tail = new Node(-1, -1);

        head->next = tail;
        tail->prev = head;
    }

    // Insert node just after head
    void addFront(Node* node) {

        node->next = head->next;
        node->prev = head;

        head->next->prev = node;
        head->next = node;
    }

    // Remove a node from the list
    void removeNode(Node* node) {

        Node* prevNode = node->prev;
        Node* nextNode = node->next;

        prevNode->next = nextNode;
        nextNode->prev = prevNode;
    }

    // Move node to front
    void moveFront(Node* node) {

        removeNode(node);
        addFront(node);
    }

    int get(int key) {

        if (cache.find(key) == cache.end())
            return -1;

        Node* node = cache[key];

        moveFront(node);

        return node->val;
    }

    void put(int key, int value) {

        // Key already exists
        if (cache.find(key) != cache.end()) {

            Node* node = cache[key];

            node->val = value;

            moveFront(node);

            return;
        }

        // Cache is full
        if (cache.size() == cap) {

            Node* lru = tail->prev;

            removeNode(lru);

            cache.erase(lru->key);

            delete lru;
        }

        // Insert new node
        Node* newNode = new Node(key, value);

        addFront(newNode);

        cache[key] = newNode;
    }
};