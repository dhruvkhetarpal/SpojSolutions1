#include <bits/stdc++.h>
using namespace std;
int main()
{	int n,i,x,z;
	for(;;)
	{	z=0;
		stack<int> s;
		vector<int> v;
		cin>>n;
		if(n==0)
			break;
		for(i=0;i<n;i++)
		{
			cin>>x;
			while(s.size()!=0&&s.top()<x)
			{
				v.push_back(s.top());
				s.pop();
			}
			s.push(x);
		}
		for(i=0;i<v.size();i++)
		{
			if(v[i]!=i+1)
			{
				z=1;
				break;
			}
		}
		if(z==1)
			cout<<"no"<<endl;
		else  cout<<"yes"<<endl;
	}
}