#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll emot(string s)
{	
	ll i,j;
	ll sl=s.length()+1;
	ll a[sl][4];
	//memset(a,0,sizeof(a));
	string s1="KEK";
	for(i=0;i<sl;i++)
		for(j=0;j<4;j++)
			a[i][j]=0;
	for(i=0;i<sl;i++)
	{
		for(j=0;j<4;j++)
		{
			if(j==0)
				a[i][j]=1;
			else if(i==0)
				a[i][j]=0;
			else if(s[i-1]==s1[j-1])
				a[i][j]=a[i-1][j-1]+a[i-1][j];
			else
				a[i][j]=a[i-1][j];

		}
	}
	
	return a[sl-1][3];
}
int main()
{	ll t,i;
	string s;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>s;
		cout<<emot(s)<<endl;
	}
}