bool sortcol(const vector<int>& v1 , const vector<int>& v2)
{
    return v1[0] < v2[0];
}
class Solution 
{
    public:
    
        vector<vector<int>> merge(vector<vector<int>>& v) 
        {
            if(v.empty())
                return v;
            vector<vector<int>> mergedInterval;
            int n = v.size(),start,end;
            sort(v.begin(),v.end(),sortcol);
            start = v[0][0],end=v[0][1];
            for(int i=1 ; i<n ; ++i)
            {
                if(v[i][0] <= end)
                    end = max(end,v[i][1]);
                else
                {
                    mergedInterval.push_back({start,end});
                    start=v[i][0];
                    end = v[i][1];
                }
            }
            mergedInterval.push_back({start,end});
           
            return mergedInterval;
        }
};