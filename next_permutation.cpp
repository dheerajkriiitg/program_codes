/*Implement next permutation, which rearranges numbers into 
the lexicographically next greater permutation of numbers.
If such arrangement is not possible, it must rearrange it 
as the lowest possible order (ie, sorted in ascending order).*/

#include <algorithm> //for next_permutation.

class Solution 
{
    public:
        void nextPermutation(vector<int>& v) 
        {
            vector <int> v_copy;
            v_copy = v;
            int n=v.size(),i,temp;
            int s_index,f_index,diff =INT_MAX;
            //next_permutation modify vector to next permutation 
            //but return true(if permutation exist) else false.
            bool val = next_permutation(v_copy.begin(),v_copy.end());
            if(val == false)
                sort(v.begin(),v.end());
            else
            {
                for(i = n-1 ; i>0 ; --i)
                {
                    if(v[i] > v[i-1])
                    {
                        s_index = i-1;
                        break;
                    }
                }
                //search closet no, from v[index] in its right side
                for(i=s_index+1 ; i<n ; ++i)
                {
                    if(v[i] > v[s_index])
                    {
                        if((v[i] -v[s_index]) < diff)
                        {
                            diff = v[i] - v[s_index];
                            f_index = i;
                        }
                    }

                }
                //swap no at s_index and f_index
                temp = v[s_index];
                v[s_index] = v[f_index];
                v[f_index] =temp;
                
                //sort in increasing order after s_index
                sort(v.begin()+s_index+1,v.end());
            }
            for(i=0 ; i<n ; ++i)
                cout <<v[i] <<" ";
            }
};