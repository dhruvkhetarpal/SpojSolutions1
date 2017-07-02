#include <bits/stdc++.h>
using namespace std;
int main()
{	int t,i,z,n,j;
	//cin>>t;
	//for(i=0;i<t;i++)
	for(;;){
		z=0;
		int a[100001],c[100001];
		cin>>n;
		if(n==0)
			break;
		for(j=1;j<=n;j++)
		{
			cin>>a[j];
			c[a[j]]=j;
		}
		for(j=1;j<=n;j++){
			if(a[j]!=c[j])
			{
				z=1;
				break;
			}}
		if(z==1)
			cout<<"not ambiguous"<<endl;
		else
			cout<<"ambiguous"<<endl;
	
}}