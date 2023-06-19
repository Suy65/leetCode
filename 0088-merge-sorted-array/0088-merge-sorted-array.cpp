class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>num(m+n,0);
        int i = 0 ,j = 0 , k = 0;
        while(i <m && j<n){
            if(nums1[i] <= nums2[j]){
                num[k++] = nums1[i++];
            }
            else{
                num[k++] = nums2[j++];
            }
        }
        for(;i<m;i++){
                num[k++] = nums1[i];
            }
        for( ;j<n;j++){
                num[k++] = nums2[j];
            }
        for( int i =0;i<m+n;i++){
            nums1[i] =num[i];
        }
    }
};