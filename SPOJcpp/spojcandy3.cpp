#include <bits/stdc++.h>
using namespace std;
int main()
{	long long int t,i,n,s,j,x;
	//vector<long long int> a;
	cin>>t;
	for(i=0;i<t;i++){
		s=0;
		cin>>n;
		for(j=0;j<n;j++)
		{
			cin>>x;
			//a.push_back(x);
			s+=x;
			s%=n;
		}
		if(s==0)
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}