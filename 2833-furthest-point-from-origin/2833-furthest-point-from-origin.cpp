class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {

        int l=0;
        int r=0;
        int u=0;
        for(auto ele : moves){
            if(ele=='L') l++;
            else if(ele=='R') r++;
            else u++;
        }
        return abs(r-l)+u;
    }
};