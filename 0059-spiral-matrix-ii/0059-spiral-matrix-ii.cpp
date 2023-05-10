class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
       // vector<int>spiral;
        vector<vector<int>>matrix(n,vector<int>(n,0));
        int count =1;
        int total = n*n;
        int top =0;
        int bottom =n-1;
        int left=0;
        int right =n-1;
        
       // for( int i= 0; i<n*n ;i++){
       //     spiral.push_back(i+1);
       // }
        while(count<=total){
           for( int i = left ; count<=total && i<=right;i++){
               if(matrix[top][i] == 0){  
                  matrix[top][i] = count++;
               }
            }
          top++;
          for( int i =top ; count<total && i<=bottom;i++){
                if(matrix[i][right] == 0){
                    matrix[i][right] = count++;
                }
                
            }
          right--;
          for( int i = right ;count<=total && i>=left ;i--){
               if(matrix[bottom][i] == 0){
                   matrix[bottom][i] = count++;
               }
               
           } 
          bottom--;
          for( int i = bottom; count<=total && i>=top ;i--){
               if(matrix[i][left] == 0){
                   matrix[i][left] = count++;
               }
               
           }
          left++;   
         }
        return matrix;
    }
};