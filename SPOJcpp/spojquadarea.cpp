#include <bits/stdc++.h>
using namespace std;
int main()
{
	double t,a,b,c,d,s,an,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>a>>b>>c>>d;
		s=(a+b+c+d)/2;
		an=sqrt((s-a)*(s-b)*(s-c)*(s-d));
		printf("%0.2lf\n",an);
	}

	


}