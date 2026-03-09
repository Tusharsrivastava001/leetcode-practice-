class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n=s.length();
        int l=0;
        int r=0;
        int maxl=0;
        unordered_map<char,int> map;
        while(r<n){
            if(map.find(s[r])!=map.end()){
                l=max(l,map[s[r]]+1);
            }
            int len=r-l+1;
            maxl=max(maxl,len);
            map[s[r]]=r;
            r++;
        }
        return maxl;
    }
};