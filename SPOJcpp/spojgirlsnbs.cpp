#include <bits/stdc++.h>
using namespace std;
int main()
{	float g,b;
	int a;
	for(;;)
	{
		cin>>g>>b;
		if(g==-1&&b==-1)
			break;
		if(g>b)
		{
			a=ceil(g/(b+1));
			cout<<a<<endl;
		}
		else if(b>g)
		{
			a=ceil(b/(g+1));
			cout<<a<<endl;
		}
		else if(b!=0&&g!=0)cout<<"1"<<endl;
		else cout<<"0"<<endl;
	}
}