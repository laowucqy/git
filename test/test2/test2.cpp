#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
    int n,num[65535];
    while(scanf("%d",&n)!=EOF)
    {
        int ans=0;
        memset(num,0,sizeof(num));
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(j%i==0)
                {
                    num[j]++;
                }
            }
        }
        for(int i=1;i<=n;i++)
        {
            if(num[i]%2==0)
                ans++;
        }
        cout<<ans<<endl;
    }
}
