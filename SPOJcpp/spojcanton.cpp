#include <bits/stdc++.h>
using namespace std;
int main()
{	int t,i,n,j;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n;
		for(j=1;;j++)
		{
			if(n<=(j*(j+1)/2))
			{
				break;

			}

			

		}
		cout<<"TERM "<<n<<" IS ";
		if(j%2==0)
		cout<<j+1-((j*(j+1)/2)-n+1)<<"/"<<(j*(j+1)/2)-n+1<<endl;
		else 
		cout<<(j*(j+1)/2)-n+1<<"/"<<j+1-((j*(j+1)/2)-n+1)<<endl;
	}
}