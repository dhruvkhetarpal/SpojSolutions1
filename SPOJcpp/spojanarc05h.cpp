#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll d[100],len;
ll ways(ll po,ll ps,ll l)
{	ll sum=0;
	ll i,an=0;
	if(po==len)
		return 1;
	for(i=po;i<len;i++)
	{
		sum+=d[i];
		if(sum>=ps)
			an+=ways(i+1,sum,len);
	}
	return an;
}
int main()
{	ll i,a=1;
	string s;
	for(;;)
	{
		cin>>s; 
		if(s=="bye")
			break;
		for(i=0;i<s.length();i++)
			d[i]=s[i]-'0';
		 len=i;
		cout<<a++<<". "<<ways(0,0,len)<<endl;
	}
}