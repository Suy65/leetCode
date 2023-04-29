class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s;
        for(int i: nums){
            s.insert(i);
        }
        int c =s.size();
        int j=0;
        for(int x:s){
            nums[j++] = x;
        }
        return c;
    }
};