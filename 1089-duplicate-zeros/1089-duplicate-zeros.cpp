class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int>v(arr.begin() ,arr.end());
        int i=0;
        int n= arr.size();
        for(int j=0 ;j<n && i<n ;j++){
            if(v[j] == 0){
                arr[i]=0;
                if(i+1 < n){
                    arr[i+1]=0;
                }
                i+=2;
            }else{
                arr[i]=v[j];
                i++;
            }
        }
        
    }
};
  