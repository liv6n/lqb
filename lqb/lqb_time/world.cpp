    //first r
    //学习蓝桥杯c++
/*字母三角形
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        string space(n-i,' ');
        string ch(2*i-1,'A'+i-1);
        cout <<space+ch<< endl;
    }
    return 0;
}*/
/*
#include<iostream>
using namespace std;
int main()
{
    char st;
    cin>>st;
    int j;
    if(st<='Z'&&st>='A')
    {
        for(int i = 1;i<=st-'A'+1;i++)
        {
            for( j = 1;j<=st-'A'+1-i ;j++)
            {cout<<' ';}
            for(j = 1;j<=i;j++)
            {
                cout<<(char)('A'+j-1);
            }
            for(j = i-1;j>=1;j--)
            {
                cout<<(char)('A'+j-1);
            }

            cout<<endl;
        }


    }
    else{
        for(int i = 1;i<=st-'1'+1;i++)
        {
            for(int j = 1;j<=st-'1'+1-i ;j++)
            {cout<<' ';}
            for(j = 1;j<=i;j++)
            {
                cout<<(char)('1'+j-1);
            }
            for(j = i-1;j>=1;j--)
            {
                cout<<(char)('1'+j-1);
            }
            cout<<endl;
        }



    }
    return 0;
}*/
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char res[500000];
    int n ,len;
    cin>>n;
    for(int i = 1;i<=n;i++)
    {
        strcat(res+len+1,res);
        res[len] = 'A'+i-1;
        len = strlen(res);
    }
    cout<<res<<endl;
    return 0;
}*/
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int len1 = s1.size();
    int len2 = s2.size();
    int count = 0;
    for(int i = 0;len2+i-1<len1;i++)
    {
        bool matched = true;
        for(int j = 0;j<len2;j++)
        {
            if(s1[i+j] != s2[j])
            {
                matched = false;
                break;
            }
        }
        if(matched)
            {
                count++;
            }
    }
    cout<<count;
    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
bool cmp(int x,int y)s
{
    return x % 3 < y % 3;
}
int main()
{
    int arr[3];
    for(int i = 0;i < 3;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+3,cmp);
    for(int i = 0;i < 3;i++)
    {
        cout<<arr[i];
    }
    return 0;
}*/