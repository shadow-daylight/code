#include <iostream>
using namespace std;
int main()
{
	int i,j;
	int tmp,k2;
	int c = 0,max = 0;
	while (cin>>i>>j)
	{
		cout<<i<<" "<<j<<" ";
		if(i > j)
		{
			tmp = i;
			i = j;
			j = tmp;
		}
		max = 0;
		for(int k = j; k >= i; k--)
		{
			k2 = k;
			c = 0;
			while (k2 != 1)
			{
				if (k2 % 2 == 0)
				{
					k2 /= 2;
					c++;
				}
				else
				{
					k2 = 3*k2 + 1;
					c++;
				}
			}
			if (max < c)
				max = c;
		}
		cout<<max+1<<endl;
	}
}
