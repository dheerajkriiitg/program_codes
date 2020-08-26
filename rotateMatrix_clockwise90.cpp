/*You are given an n x n 2D matrix representing an image.
Rotate the image by 90 degrees (clockwise). */

class Solution {
public:
    void swap(int& a, int& b)
    {
        int temp;
        temp =a;
        a=b;
        b=temp;
    }
    void rotate(vector<vector<int>>& m) 
    {
        int i,j,k;
        
        //find transpose
        for(i=0 ; i<m.size() ; ++i)
        {
            for(j=i+1 ; j<m.size() ; ++j)
            {
                    swap(m[i][j],m[j][i]);
            }
        }
        
        //arrange columns of transpose to get desired shape
        for(j=0 ,k=m.size()-1 ; j<k ;++j,--k)
        {
            for(i=0 ; i<m.size() ; ++i)
            {
                swap(m[i][j] , m[i][k]);
            }
        }
    }
};