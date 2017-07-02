#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<ll> v1,v2;
ll t[5000][5000],m;
ll lcs()
{
	ll i,j;
	for(i=0;i<=v1.size();i++)
	{
		for(j=0;j<=v2.size();j++)
		{
			if(i==0||j==0)
				t[i][j]=0;
			else if(v1[i]==v2[j])
				t[i][j]=t[i-1][j-1]+1;
			else
				t[i][j]=max(t[i-1][j],t[i][j-1]);
		}
	}
	return t[v1.size()][v2.size()];

}
int main()
{	ios_base::sync_with_stdio(0);
	ll t,i,x;
	cin>>t;
	
	for(i=0;i<t;i++)
	{	m=0;
		v1.clear();
		v2.clear();
		for(;;)
		{
			cin>>x;
			if(x==0)
				break;
			v1.push_back(x);
		}
		for(;;)
		{
			v2.clear();
			cin>>x;
			if(x==0)
				break;
			v2.push_back(x);
			for(;;)
			{
				cin>>x;
				if(x==0)break;
				v2.push_back(x);
			}
			m=max(m,lcs());
		}
		cout<<m<<endl;
	}
}