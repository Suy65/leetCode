class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size()<=1)return s;
        string longest="";
        for(int i=0;i<s.length();i++){
            string sub1=expand(s,i,i+1);
            string sub2=expand(s,i,i);
            string sub3=sub1.size() > sub2.size() ? sub1 : sub2;
            if(sub3.size() > longest.size()){
                longest=sub3;
            }
        }
        return longest;
    }
    string expand(string s,int i , int j){
        while(j<s.size() && i>=0 && s[i]==s[j]){
            i--;
            j++;
        }
        return s.substr(i+1,j-i-1);
    }
    
};