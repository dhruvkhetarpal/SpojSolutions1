#include <bits/stdc++.h>
using namespace std;
int main()
{	long long int t,i,r;
	double f;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>r;
		f=(4*r*r)+0.25;
		cout<<"Case "<<i+1<<": ";
		printf("%0.2lf\n",f);
	}
}