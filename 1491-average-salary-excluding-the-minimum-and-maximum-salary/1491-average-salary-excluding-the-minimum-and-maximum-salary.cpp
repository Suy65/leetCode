class Solution {
public:
    double average(vector<int>& salary) {
        int n = salary.size();
        sort(salary.begin(),salary.end());
        int  sum =0;
        double avg =0;
        for( int i=1;i<n-1;i++){
            sum+=salary[i];
        }
        avg =(double)sum/(double)(n-2);
        return avg;
        
    }
};