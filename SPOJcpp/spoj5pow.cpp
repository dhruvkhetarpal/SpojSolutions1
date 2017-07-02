#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,i,c,n,j,r;
	cin>>t;
	for(i=0;i<t;i++)
	{
		j=1;
		c=0;
		cin>>n;
		while(n>=pow(5,j))
		{
			c+=(n/pow(5,j));
			j++;
		}
		cout<<c<<endl;

	}
}