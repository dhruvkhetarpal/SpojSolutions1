#include <bits/stdc++.h>
using namespace std;
double fac(int n)
{	
	if(n==1)
		return 0;
	else if(n==2)
		return log10(2);
	else return log10(n)+log10(fac(n-1));
}
int main()
{	long long int n,t,i;
	double fact;
	cin>>t;
	for(i=0;i<t;i++)
	{	cin>>n;
		fact=fac(n);
		cout<<fac(n)<<endl;
	}
}