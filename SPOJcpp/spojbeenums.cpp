#include <bits/stdc++.h>
using namespace std;
int main()
{
	for(;;)
	{	int n;
		cin>>n;
		if(n==-1)
			break;
		//if(n%2==0)
		//	cout<<"N"<<endl;
		//else
		//{	
		//	if(n%3==0)
		//		cout<<"N"<<endl;

		//}
		if(n%2)
		{
			n--;
			if(n%3==0)
			{	
				n/=3;
				n=4*n+1;
				int s=sqrt(n);
				if(s*s==n)
				{
					if(s%2)
						{cout<<"Y"<<endl;}
					else {cout<<"N"<<endl;}
				}
				else {cout<<"N"<<endl;}
			}
			else {cout<<"N"<<endl;}
		}
		else {cout<<"N"<<endl;}

	}
}