#include <bits/stdc++.h>
using namespace std;
int main()
{	long long int n,i,s=0;
	ios_base::sync_with_stdio(0);cin.tie(NULL);
	cin>>n;
	long long int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		s^=a[i];
	}
	cout<<s;
}