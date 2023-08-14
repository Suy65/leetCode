class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> a ={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_map<string,int>ump;
        for( int i =0; i<words.size() ;i++){
            string st ;
            for(int j = 0 ; j < words[i].size(); j++){
                st+=a[words[i][j] -'a'];
            }
            ump[st] = 1;
        }
       return ump.size();
    }
};