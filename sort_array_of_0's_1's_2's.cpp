/*Given an array A[] consisting 0s, 1s and 2s. 
The task is to write a function that sorts the given array. 
The functions should put all 0s first, then all 1s and all 2s in last.*/
class Solution {
public:
    void swap(int &m,int &n)
    {
	    int temp;
	    temp = m;
	    m=n;
	    n=temp;
    }

    void sortColors(vector<int>& nums) 
    {
        int n,i;
        n=nums.size();
        int low = 0,mid=0,high=n-1; // 0->low = 0, low->mid =1, mid->high = unknown,high->(n-1) = 2
        for(i=0 ; i<n ; ++i)
	    {
		    if(nums[i] == 0)
		    {
			    swap(nums[low],nums[i]);
			    ++low;
			    ++mid;
		    }
		    else if(nums[i] == 1)
			    ++mid;
		    else
		    {
			    swap(nums[i],nums[high]);
			    --high;
			    --i;
		    }
		    if(mid>high)
			    break;
	    }
	    for(i=0 ; i<n ; ++i)
		    cout << nums[i] << endl;
        
      }
    
};