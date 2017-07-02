#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll lcs(string s,string s1)
{	ll i,j,t[s.length()+1][s.length()+1];
	for(i=0;i<=s.length();i++)
	{
		for(j=0;j<=s1.length();j++)
		{
			if(i==0||j==0)
				t[i][j]=0;
			else if(s[i-1]==s1[j-1])
				t[i][j]=t[i-1][j-1]+1;
			else
				t[i][j]=max(t[i-1][j],t[i][j-1]);
		}
	}
	return t[s.length()][s.length()];
}
int main()
{	string s1,s;
	ll t;
	cin>>t;
	while(t--)
	{	
	cin>>s;
	ll i,a,j;
	s1=s;
	for(i=0,j=s1.length()-1;i<j;i++,j--)
	{
		char temp=s1[i];
		s1[i]=s1[j];
		s1[j]=temp;
	}
	a=lcs(s,s1);
	cout<<s.length()-a<<endl;
	//cout<<r;
}}