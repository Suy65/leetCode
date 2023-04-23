class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                st.push(s[i]);
            }else{
                if(st.size()==0)return false;
                char c= st.top();
                st.pop();
                if((s[i]==')'&& c=='(' ) || (s[i]==']'&& c=='[' ) || (s[i]=='}'&& c=='{' ))
                    continue;
                else 
                    return false;
                
            }
        }
        if(st.empty())
             return true;
        return false;
    }
};