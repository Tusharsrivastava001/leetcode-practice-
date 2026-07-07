class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum=0;
        string x="";
        int a=n;
        while(a>0){
            int s=a%10;
            if((s)!=0){
                sum+=(s);
                x+=to_string(s);
            }
            a/=10;
        }
        std::reverse(x.begin(),x.end());
        if(x=="") return 0;
        return sum*stoll(x);
    }
};