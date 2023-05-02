class Solution {
    private :
   
    public:
    int arraySign(vector<int>& nums) {
        int count =0;
        for(auto it : nums){
            if(it == 0){
                return 0;
            }
            if(it < 0){
                count++;
            }  
        }
        return count %2 ==0 ? 1 : -1;
    }
};