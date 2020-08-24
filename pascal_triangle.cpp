class Solution 
{
public:
    vector<vector<int>> generate(int numRows) 
    {
        int i,j;
        vector<vector<int>> res;
        vector <int> temp;
        for(i=0 ; i<numRows ; ++i)
        {
            for(j=0 ; j<(i+1); ++j)
            {
                if((j==0) || (j == i))
                    temp.push_back(1);
                else
                {
                   if(i >= 2)
                   {
                       temp.push_back(res[i-1][j-1] + res[i-1][j]);
                   }
                }
                
            }
            res.push_back(temp);
            temp.clear();
        }
        return res;
    }
    
};