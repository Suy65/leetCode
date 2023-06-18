class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>merged;
        //SORT THE INTERVALS
        sort(intervals.begin(), intervals.end());
        for( auto interval:intervals){
            //MERGED IS EMPTY OR INTERVALS OVERLAP
            if(merged.empty() || merged.back()[1] < interval[0]){
                merged.push_back(interval);
            }
            // intervals does not overlap
            else{
                merged.back()[1] = max(merged.back()[1] , interval[1]);
            }
        }
        return merged;
    }
};