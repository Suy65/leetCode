class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>post;
        vector<int>neg;
        vector<int>reverse;
        int n=nums.size();
        int j =0 ,k=0;
        for(auto it: nums){
            if( it>0){
                post.push_back(it);
            }else{
                neg.push_back(it);
            }
        }
        
        for(int i= 0;i<n/2 ;i++){
            reverse.push_back(post[j++]);
            reverse.push_back(neg[k++]);
        }
        return reverse;
    }
};