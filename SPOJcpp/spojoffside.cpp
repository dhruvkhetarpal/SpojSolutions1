#include <bits/stdc++.h>
using namespace std;
int main()
{
	for(;;)
	{	int a,b,i;
		cin>>a>>b;
		int ar[a],arr[b];
		if(a==0&&b==0)
			break;
		for(i=0;i<a;i++)
		{
			cin>>ar[i];
		}
		sort(ar,ar+a);
		for(i=0;i<b;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+b);
		if(arr[1]>ar[0])
			cout<<"Y"<<endl;
		//else if(arr[0]==ar[0]&&arr[0]==arr[1])
		//	cout<<"N"<<endl;
		//else if(arr[0]==ar[0]&&arr[0]!=arr[1])
		//	cout<<"Y"<<endl;
		else cout<<"N"<<endl;
	}
}
