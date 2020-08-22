/*Given an unsorted array of size N of positive integers. 
One number 'A' from set {1, 2, …N} is missing and one number 'B' occurs twice in array. 
Find these two numbers.*/
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
	    int n,i,xor1=0,x=0,y=0,set_bit_no,count=0;
	    cin >> n;
	    vector <int> a(n);
	    for(i=0 ; i<n ; ++i)
	    {
	        cin >> a[i];
	        xor1 = xor1 ^a[i];
	    }
	    for(i=1 ; i<=n;++i)
	        xor1=xor1 ^i;
	    set_bit_no = xor1 & ~(xor1 -1);
	    
	    for(i=0 ; i<n ; ++i)
	    {
	        if(a[i] & set_bit_no)
	            x = x ^ a[i];
	        else
	            y = y ^ a[i];
	    }
	    for(i=1 ; i<=n;++i)
	    {
	        if(i & set_bit_no)
	            x = x ^ i;
	        else
	            y = y ^ i;
	    }
	    for(i=0 ; i<n ; ++i)
        {
            if(a[i] == x)
                ++count;
        }
        if(count ==0)
            cout << y <<" " <<x<<endl;
        else
            cout << x<<" " <<y<<endl;
	}
	return 0;
}