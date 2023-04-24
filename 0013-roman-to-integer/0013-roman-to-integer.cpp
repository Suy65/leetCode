class Solution {
public:
    int romanToInt(string s) {
        unordered_map <char,int> num{
        {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}}; 
        int res=0;
        int i=0;
        while(i<s.size()){
            if(num[s[i]]<num[s[i+1]])
                res-=num[s[i]];
            else
            {
                res+=num[s[i]];
                
            }
            i++;
        }
         return res;
    }
};