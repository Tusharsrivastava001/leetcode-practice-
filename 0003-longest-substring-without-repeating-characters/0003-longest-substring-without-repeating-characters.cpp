class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //here we will be usin the slidin window technique man 
        // int n=s.size();
        std::vector<int> freq(256,-1);
        int maxl=0;
        int n=s.size();
        int left=0;
        for(int right=0;right<n;right++){
            if(freq[s[right]]>=left){
                //here we just haev to update the left as this char is already seen in window 
                left=freq[s[right]]+1;
            }
            freq[s[right]]=right;
            maxl=max(maxl,right-left+1);
        }
        return maxl;
        // int maxl=0;
        // for(int i=0;i<n;i++){
        //     for(int j=i;j<n;j++){
        //         string si="";
        //         std::vector<int> freq(256,0);
        //         bool valid=true;
        //         for(int k=i;k<=j;k++){
        //             if(freq[s[k]]>0){
        //                 valid=false;
        //                 break;
        //             }
        //             freq[s[k]]++;
        //             si+=s[k];
        //         }
        //         if(valid){
        //             maxl=std::max(maxl,j-i+1);
        //         }
        //     }
        // }
        // return maxl;
    }
};