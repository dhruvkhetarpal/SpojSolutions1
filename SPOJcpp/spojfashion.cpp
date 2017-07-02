#include <bits/stdc++.h>
using namespace std;
int main()
{	int t,i,n,j,x,s=0;
	cin>>t;
	for(i=0;i<t;i++)
	{	s=0;
		vector<int> a,b;
		cin>>n;
		for(j=0;j<n;j++)
		{
			cin>>x;
			a.push_back(x);
		}
		for(j=0;j<n;j++)
		{
			cin>>x;
			b.push_back(x);
		}
		sort(a.begin(),a.begin()+a.size());
		sort(b.begin(),b.begin()+b.size());
		for(j=0;j<n;j++)
			s+=(a[j]*b[j]);
		cout<<s<<endl;


	}
}