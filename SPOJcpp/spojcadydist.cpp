#include <bits/stdc++.h>
using namespace std;
int main()
{
	for(;;)
	{ long long int n,i,s=0;
		cin>>n;
		if(n==0)
			break;
		long long int a[n],b[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<n;i++)
			cin>>b[i];
		sort(a,a+n);
		sort(b,b+n);
		for(i=0;i<n;i++)
		{
			s+=(a[i]*b[n-i-1]);
		}
		cout<<s<<endl;
	}
}