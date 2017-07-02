#include <bits/stdc++.h>
using namespace std;
int main()
{	int t,n,i,j;
	string s;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n;
		cin>>s;
		int a[10]={0};
		for(j=0;j<s.length()-2;j++)
		{
			if(s[j]=='T'&&s[j+1]=='T'&&s[j+2]=='T')
			{
				a[0]++;
			}
			else if(s[j]=='T'&&s[j+1]=='T'&&s[j+2]=='H')
			{
				a[1]++;
			}
			else if(s[j]=='T'&&s[j+1]=='H'&&s[j+2]=='T')
			{
				a[2]++;
			}
			else if(s[j]=='T'&&s[j+1]=='H'&&s[j+2]=='H')
			{
				a[3]++;
			}
			else if(s[j]=='H'&&s[j+1]=='T'&&s[j+2]=='T')
			{
				a[4]++;
			}
			else if(s[j]=='H'&&s[j+1]=='T'&&s[j+2]=='H')
			{
				a[5]++;
			}
			else if(s[j]=='H'&&s[j+1]=='H'&&s[j+2]=='T')
			{
				a[6]++;
			}
			else if(s[j]=='H'&&s[j+1]=='H'&&s[j+2]=='H')
			{
				a[7]++;
			}
		}
		cout<<i+1<<" ";
		for(j=0;j<8;j++)
		{
			cout<<a[j]<<" ";
		}
		cout<<endl;

	}
}