class Solution {
public:
    vector<int> plusOne(vector<int>& v) {
     int n=v.size();
        for(int i=n-1;i>=0;i--){
            if(v[i]<9){
                v[i]++;
                return v;
            }
            else{
                v[i]=0;
            }
        }   
        v.insert(v.begin(),1);
        //uske 1 position pe 1 add kar denge aur ek size bhi increase hoga 999 99 9
        return v;
    }
};
