#include <bits/stdc++.h>
using namespace std;
int main()
{	long long int t,i,n,k,j;
	cin>>t;
	for(i=0;i<t;i++)
	{	long long int min=100000000000,z=0;
		cin>>n>>k;
		long long int a[n];
		for(j=0;j<n;j++)
			cin>>a[j];
		sort(a,a+n);
		for(j=0;j<=n-k;j++)
		{
			if(min>a[j+k-1]-a[j]){
				min=a[j+k-1]-a[j];
				z=1;
			}
		}
		if(z==0)min=a[n-1]-a[0];
		cout<<min<<endl;
	}
}