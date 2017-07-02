#include <bits/stdc++.h>
using namespace std;
int rev(int a)
{	int ni,s=0,i=1;
	while(a)
	{
	ni=a%10;
	s=(10*s)+(ni);
	//i*=10; 
	a/=10;}
	return s;
}
int main()
{	int n,a,b;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		cout<<rev(rev(a)+rev(b))<<endl;
	}
}
