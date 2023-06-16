class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        vector<int>left;
        vector<int>right;
        stack<pair<int,int>>s;
        stack<pair<int,int>>ss;
        int p1 =-1;
        int p2 = heights.size();
        int n =heights.size();
        for(int i=0 ;i<n; i++){ //nearest smallest to left
            if(s.size() == 0){
                left.push_back(p1);
            }
            else if(s.size()>0 && s.top().first < heights[i]){
                left.push_back(s.top().second);
            }
            else if(s.size()>0 && s.top().first >= heights[i]){
                while(s.size()>0 && s.top().first >= heights[i]){
                    s.pop();
                 }
                if(s.size() == 0){
                left.push_back(p1);
                }
                else{
                  left.push_back(s.top().second);
             }
        }
            s.push({heights[i],i});
        
    }
        for(int i=n-1 ;i>=0; i--){ // nearest smallest to right
            if(ss.size() == 0){
                right.push_back(p2);
            }
            else if(ss.size()>0 && ss.top().first < heights[i]){
                right.push_back(ss.top().second);
            }
            else if(ss.size()>0 && ss.top().first >= heights[i]){
                while(ss.size()>0 && ss.top().first >= heights[i]){
                    ss.pop();
                 }
                if(ss.size() == 0){
                right.push_back(p2);
                }
                else{
                  right.push_back(ss.top().second);
             }
        }
            ss.push({heights[i],i});
            
        }
        reverse(right.begin(),right.end());
        int maxi =INT_MIN;
        vector<int>ans;
        for(int i=0;i<n;i++){
            int z=heights[i]*(right[i]-left[i]-1);
            int maxi = max(maxi ,z);
            ans.push_back(z);
        }
        sort(ans.begin(),ans.end());
        return ans[n-1];
            
    }        
};