#include <bits/stdc++.h>
using namespace std;
int main()
{	int t,i,j,g,m,x;
	cin>>t;
	for(i=0;i<t;i++)
	{	vector<int> vg,vm;
		cin>>g>>m;
		for(j=0;j<g;j++)
		{
			cin>>x;
			vg.push_back(x);
		}
		sort(vg.begin(),vg.begin()+vg.size());
		for(j=0;j<m;j++)
		{
			cin>>x;
			vm.push_back(x);
		}
		sort(vm.begin(),vm.begin()+vm.size());
		if(vg[vg.size()-1]>=vm[vm.size()-1])
			cout<<"Godzilla"<<endl;
		else cout<<"MechaGodzilla"<<endl;
	}
}