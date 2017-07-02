#include <bits/stdc++.h>
using namespace std;
#define pi 3.14159265359
int main()
{	float n;
	float a;
	for(;;)
	{
		cin>>n;
		if(n==0)
			break;
		a=n*n/(2*pi);
		printf("%0.2f\n",a);

	}
}