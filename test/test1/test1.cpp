#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
    int n=10;
    int num[11];
    int flag=1;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
        if(num[i]<=60)
        {
            flag=0;
        }
    }
    if(flag==1)
        cout<<60<<endl;
    else
    {
        sort(num,num+n);
        int ans;
        ans=num[4]-num[4]%10;
        cout<<ans<<endl;
    }

}
