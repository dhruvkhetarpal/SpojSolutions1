#include <bits/stdc++.h>
using namespace std;
int main()
{
	for(;;)
	{	float n,s=0,c=0,i;
		
		//scanf("%0.2f",&n);
		cin>>n;
		if(n==0.00)
			break;
		for(i=2;;i++)
		{
			s+=(1/i);
			c++;
			if(s>=n)
				break;
		}
		//printf("%d card(s)\n",c);
		cout<<c<<" card(s)"<<endl;
	}
}