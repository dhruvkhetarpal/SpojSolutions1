#include <bits/stdc++.h>
using namespace std;
int bsearch(int a[],int low,int high,int search)
{
	int mid=(high+low)/2;
	if(high>=low)
	{
	if(a[mid]==search)
		return mid;
	else if(a[mid]>search)
		return bsearch(a,low,mid-1,search);
	else if(a[mid]<search)
		return bsearch(a,mid+1,high,search);
	}
	return -1;
	//while(high>=low)
	//{int mid=(high+low)/2;
	//	if(a[mid]==search)
	//	{
	//		return mid;
	//	}
	//	else if(a[mid]>search)
	//	{
	//		high=mid-1;
	//	}
	//	else if(a[mid]<search)
	//	{
	//		low=mid+1;
	//	}
		
	//}
	return -1;
}
int main()
{	int n,k,i,c=0;
	cin>>n>>k;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for(i=0;i<n-1;i++)
	{
		int temp=bsearch(a,i+1,n,k+a[i]);
		if(temp>=0)
			c++;

	}
	cout<<c;
}