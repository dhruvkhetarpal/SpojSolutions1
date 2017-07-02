#include <bits/stdc++.h>
using namespace std;
int main()
{	int a,b,i,t,c,z,s,j,x;
	cin>>t;
	for(i=0;i<t;i++)
	{	c=0;z=0;s=0;
		vector<int> v;
		cin>>a>>b;
		for(j=0;j<b;j++)
		{
			cin>>x;
			v.push_back(x);
		}
		sort(v.begin(),v.begin()+v.size());
		for(j=v.size()-1;j>=0;j--)
		{
			s+=v[j];
			c++;
			if(s>=a)
			{
				z=1;
				break;
			}
		}
		cout<<"Scenario #"<<i+1<<":"<<endl;
		if(z==1)
			cout<<c<<endl;
		else cout<<"impossible"<<endl;
	}
}