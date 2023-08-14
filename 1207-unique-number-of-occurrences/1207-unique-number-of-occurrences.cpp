class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        unordered_set<int>s;
        int n = arr.size();
        for( int i =0;i<n;i++){
            mp[arr[i]]++;
        }
        for( auto x : mp){
            if(s.count(x.second)){
                return false;
            }
            s.insert(x.second);
        }
            return true;
        
    }
};