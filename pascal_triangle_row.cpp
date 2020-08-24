/*Given an integer rowIndex(n), return the nth row of the Pascal's triangle.
Notice that the row index starts from 0. */

/*METHOD-1*/
class Solution {
public:
    vector<int> getRow(int n) 
    {
        int i,j;
        vector<int> res,temp;
        
        for(i=0 ; i<= n ; ++i)
        {
            for(j=0 ; j<(i+1); ++j)
            {
                if((j==0) || (j == i))
                    res.push_back(1);
                else
                     res.push_back( temp[j-1] + temp[j]);
            }
            temp = res;
            res.clear();
        }
        return temp;
    }
};

/*METHOD-2   */
/* ith row will be nC0,nC1,.......,nCi */

class Solution {
public:
    vector<int> getRow(int n) 
    {
        vector <int> result;
        long long prev =1,curr,i;
        result.push_back(1);
        for(i=1 ; i<=n ; ++i)
        {
            //nCr = (nCr-1 * (n-r +1))/r */
            curr = (prev*(n - i +1))/i;
            prev = curr;
            result.push_back(curr);
        }
        return result;
    }
};

