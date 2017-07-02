#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    
    for(;;)
    {	int t;
    	cin>>t;
    	if(t==0)
    		break;
        char arr[300];
        cin>>arr;
        int len=strlen(arr)/t;
        char ans[len][t];
        int i,j,k=0;
        for(i=0;i<len;i++)
        {
            if(i%2)
            {
                for(j=t-1;j>=0;j--)
                   ans[i][j]=arr[k++];
            }
            else{
            for(j=0;j<t;j++)
            {
                ans[i][j]=arr[k++];
            }}
        }
        for(i=0;i<t;i++)
        {
            for(j=0;j<len;j++)
                printf("%c",ans[j][i]);
        }
        printf("\n");
        scanf("%d",&t);
    }
    return 0;
}