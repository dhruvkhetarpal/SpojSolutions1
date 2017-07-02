#include <bits/stdc++.h>
using namespace std;
int main()
{	int n;
	for(;;)
	{
		cin>>n;
		if(n==0)
			break;
		else{
				cout<<n*(2*n+1)*(n+1)/6<<endl;
			}
	}
}