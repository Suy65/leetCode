class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>spiral;
        int n = matrix.size();
        int m = matrix[0].size();
        int count =0;
        int total = m*n;
        int top =0;
        int bottom = n-1;
        int left=0;
        int right = m-1;
        
        while(count<total){
           for( int i = left ; count<total && i<=right;i++){
                  spiral.push_back(matrix[top][i]);
                  count++;
            }
          top++;
          for( int i =top ; count<total && i<=bottom;i++){
                spiral.push_back(matrix[i][right]);
                count++;
            }
          right--;
          for( int i = right ;count<total && i>=left ;i--){
               spiral.push_back(matrix[bottom][i]);
               count++;
           } 
          bottom--;
          for( int i = bottom; count<total && i>=top ;i--){
               spiral.push_back(matrix[i][left]);
               count++;
           }
          left++;   
         }
        return spiral;
    }
};