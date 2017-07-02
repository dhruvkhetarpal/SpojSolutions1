#include <bits/stdc++.h>
using namespace std;
int main()
{	long long int t,i,f,l,s,n,d,a,j;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>f>>l>>s;
		n=2*s/(f+l);
		cout<<n<<endl;
		d=(l-f)/(n-5);
		a=f-2*d;
		for(j=0;j<n;j++)
			cout<<a+j*d<<" ";
		cout<<endl;
	}
}