#include <iostream>
using namespace std;

void sieve(int m);

int main()
{
	int n;
	cout << "Enter number upto which(including the number) you want prime number from 1" << endl;
	cin >> n;
	sieve(n);

	return 0;
}

void sieve(int m)
{
	int a[10000];

	for (int i = 2; i < m+1; ++i)
	{			
			a[i] = 1;
		
	}

	for (int i = 2; i < m+1; ++i)
	{
		if (a[i] == 1)
		{
			for (int k = 0; (i*(i+k)) < m+1 ; ++k)
			{
				a[i*(i+k)]=0;
			}
		}
	}

	for (int i = 2; i < m+1; ++i)
	{			
		if (a[i] == 1)
		{
			// cout << "hello" <<endl;
			cout << i << endl;
		}
	}


}