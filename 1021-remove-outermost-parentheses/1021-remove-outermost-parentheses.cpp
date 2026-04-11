class Solution {
public:
    string removeOuterParentheses(string s) {
        std::vector<string> v;
        int count=0;
        int start=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') count++;
            else count--;
            if(count==0){
                v.push_back(s.substr(start,i-start+1));
                start=i+1;
            }
        }
        string ans="";
        //here we remove the outer parenths
        for(auto p : v){
            ans+=p.substr(1,p.size()-2);
        }
        return ans;
    //   string ans;
    //   int count=0;
    //   for(char c : s){
    //     if(c=='('){
    //         if(count>0) ans+=c;
    //         count++;
    //     }
    //     else{
    //         count--;
    //         if(count>0) ans+=c;
    //     }
    //   }
    //   return ans;  
    }
};