#include <bits/stdc++.h>
using namespace std;
int main()
{	long long int t,n,i,z;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n;
		z=n*(n+2)*(2*n+1)/8;
		cout<<z<<endl;
	}
}