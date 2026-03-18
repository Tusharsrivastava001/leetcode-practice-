class Solution {
public:
    int countCommas(int n) {
        if(n<4) return 0;
        int count=0;
        long long base=1000;
        while(n>=base){
            count+=(n-base+1);
            base*=1000;
        }
        return count;
    }
};