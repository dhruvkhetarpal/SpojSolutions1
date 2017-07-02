#include <bits/stdc++.h>
using namespace std;
int main()
{	int x,y,z;
	for(;;)
	{
		cin>>x>>y>>z;
		if(x==0&&y==0&&z==0)
			break;
		else
		{
			if(y-x==z-y)
			{
				cout<<"AP "<<2*z-y<<endl;

			}
			else 
			{
				cout<<"GP "<<z*z/y<<endl;
			}
		}
	}
}