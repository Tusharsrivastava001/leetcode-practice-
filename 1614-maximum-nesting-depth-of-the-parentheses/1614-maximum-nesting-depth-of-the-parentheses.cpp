class Solution {
public:
    int maxDepth(string s) {
      int maxi=0;
      int c=0;
      for(char ele : s){
        if(ele=='('){
            c++;
            maxi=std::max(maxi,c);
        }
        else if(ele==')'){
            c--;
        }
      }  
      return maxi;
    }
};