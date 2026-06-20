class Solution {
public:
    int maxBuilding(int n, vector<vector<int>>& restrictions) {
        
        // Step 1: add building 1
        restrictions.push_back({1, 0});
        
        // Step 2: sort by building id
        sort(restrictions.begin(), restrictions.end());
        
        int m = restrictions.size();
        
        // Step 3: forward pass (left → right)
        for (int i = 1; i < m; i++) {
            int dist = restrictions[i][0] - restrictions[i-1][0];
            restrictions[i][1] = min(restrictions[i][1],
                                     restrictions[i-1][1] + dist);
        }
        
        // Step 4: backward pass (right → left)
        for (int i = m - 2; i >= 0; i--) {
            int dist = restrictions[i+1][0] - restrictions[i][0];
            restrictions[i][1] = min(restrictions[i][1],
                                     restrictions[i+1][1] + dist);
        }
        
        int ans = 0;
        
        // Step 5: calculate max peak between restrictions
        for (int i = 1; i < m; i++) {
            int id1 = restrictions[i-1][0];
            int h1  = restrictions[i-1][1];
            
            int id2 = restrictions[i][0];
            int h2  = restrictions[i][1];
            
            int dist = id2 - id1;
            
            int peak = (h1 + h2 + dist) / 2;
            ans = max(ans, peak);
        }
        
        // Step 6: handle tail (last restriction → n)
        int lastId = restrictions[m-1][0];
        int lastH  = restrictions[m-1][1];
        
        ans = max(ans, lastH + (n - lastId));
        
        return ans;
    }
};