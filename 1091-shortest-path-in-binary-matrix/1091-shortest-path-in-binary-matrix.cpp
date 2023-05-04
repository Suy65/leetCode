class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        queue<pair<int,pair<int,int>>>q;
        int n= grid.size();
        
        vector<vector<int>>dist(n,vector<int>(n ,1e9));
        if(grid[0][0] == 1)return -1;
        if(grid[0][0] == 0 && n == 1 )return 1;
        dist[0][0]=1;
        q.push({1,{0,0}});
        while(!q.empty()){
            auto it =q.front();
            q.pop();
            int dis = it.first ;
            int r = it.second.first;
            int c = it.second.second;
            for( int drow =-1 ;drow <= 1; drow++){
                for( int dcol =-1 ;dcol <= 1; dcol++){
                    int nrow = r + drow ;
                    int ncol = c + dcol ;
                    if(nrow >=0 && nrow < n && ncol >= 0 && ncol < n && grid[nrow][ncol] == 0 && dis+1< dist[nrow][ncol] ){
                        dist[nrow][ncol] = dis+1;
                        if(nrow == n-1 && ncol == n-1)return dis+1 ;
                        q.push({1+dis,{nrow ,ncol}});
                    }
                }
            }
        }
        return -1;
    }
};