class Solution {
    private :
   
    public:
    int arraySign(vector<int>& nums) {
        int sign =1;
        for(auto it : nums){
            if(it == 0){
                return 0;
            }
            if(it < 0){
               sign = -1*sign; 
            }  
        }
        return sign;
    }
};