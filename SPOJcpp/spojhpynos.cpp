#include <bits/stdc++.h>
using namespace std;
int separate(int num)
{
	int s=0;
	while(num)
	{
		int t=num%10;
		s+=(t*t);
		num/=10;
	}
	return s;
}
int main()
{	int i,z,c,n;
	//for(i=0;i<32;i++)
	//{
		z=0;
		c=0;
		int a[10000]={0};
		cin>>n;
		for(;;)
		{
			int temp;
			temp=separate(n);
			if(a[temp]==0)
			{
				n=temp;
				a[temp]=1;
				c++;
			}
			else
			{
				z=1;
				break;
			}
			if(n==1)
			{
				//q=1;
				break;
			}
		}
		if(z==1)
			cout<<"-1"<<endl;
		else cout<<c<<endl;

	//}
}