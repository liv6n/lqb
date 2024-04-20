#include<bits/stdc++.h>
#define int long long
using namespace std;
int cnt = 0;
int arr[50000000];
bool bina(int n,int a)
{   
    int sum = 0;
    while(n>=1)
    {
        sum += n%a;
        n /= a;
    }
    if(n%sum == 0)
    return true;
    else 
    return false;
}
signed  main()
{
    for(int i = 1 ;i > 0; i++)
    {
        if(bina(i,2)&&bina(i,8)&&bina(i,10)&&bina(i,16))
        {
            cnt++;
        }
        if(cnt==2023)
        {
            cout<<i;
            break;
        }
    }
    
    return 0;
}

