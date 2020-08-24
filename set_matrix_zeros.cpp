/* Given an m x n matrix. If an element is 0, set its entire row and column to 0. */


class Solution {
public:
    void setZeroes(vector<vector<int>>& v) 
    {
        
        int i,j, set_col=1,set_row=1;
        //check if 0th col has any '0' bit
        for(i=0 ; i<v.size() ; ++i)
        {
            if(v[i][0] == 0)
            {
                set_col = 0;
                break;
            }
        }
        //check if 0th row has any '0' bit
        for(i=0 ; i<v[0].size() ; ++i)
        {
            if(v[0][i] == 0)
            {
                set_row = 0; 
                break;
            }
        }
        //check set bit and store in 0th row/col.
        for(i=0 ; i<v.size() ; ++i)
        {
            for(j=0; j<v[i].size() ; ++j)
            {
                if(v[i][j] == 0)
                {
                    v[0][j] = 0;
                    v[i][0] = 0;
                }
            }
        }
        for(i=1 ; i<v.size() ; ++i)
        {
           if(v[i][0] == 0)
           {
               for(j=1 ; j <v[i].size() ; ++j)
                    v[i][j] = 0;
           }
        }
        for(i=1 ; i<v[0].size() ; ++i)
        {
           if(v[0][i] == 0)
           {
               for(j=1 ; j <v.size() ; ++j)
                    v[j][i] = 0;
           }
        }
        if(set_row == 0)
        {
            for(i=0 ; i<v[0].size() ; ++i)
                v[0][i] = 0;
        }
        if(set_col == 0)
        {
            for(i=0 ; i<v.size() ; ++i)
                v[i][0] = 0;
        }
        for(i=0 ; i<v.size() ; ++i)
        {
            for(j=0 ; j<v[i].size() ; ++j)
                cout << v[i][j] <<" ";
            cout <<endl;
        }
    
    }
};