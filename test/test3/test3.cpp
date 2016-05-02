#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <string.h>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int n,num[1000],max,min;
    string str;
    cin>>str;
    int i=0;
    while(str.find(',',0)!=-1)
    {
        string tempstr=str.substr(0,str.find(',',0));
        num[i]=atoi(tempstr.c_str());
        i++;
        str=str.substr(str.find(',',0)+1);
    }
    num[i]=atoi(str.c_str());
    n=i;
    n++;
    min=100000;
    max=0;
    for(int i=0;i<n;i++)
    {
        if(num[i]>max) max=num[i];
        if(num[i]<min) min=num[i];
    }
    for(int i=0;i<n;i++)
    {
        if(num[i]!=max&&num[i]!=min)
            cout<<num[i]<<" ";
    }
}
