#include <bits/stdc++.h>
using namespace std;
int main()
{	long long int n;
	cin>>n;
	if(n>=1&&n<=9)
		cout<<"1"<<endl<<n;
	else if(n%10==0)
		cout<<"2";
	else 
		cout<<"1"<<endl<<n%10;
}