#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"hellow world"<<endl;
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
bool cmp(int x,int y)
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
//时间日期计算
#include<bits/stdc++.h>
using namespace std;

int leapyear(int y)
{
 //闰年计算
//是4的倍数且不是整百或者年份为400的倍数
if((y % 4 == 0 && y % 100 != 0)||(y % 400 == 0))
return 1;
else
return 0;//将leapyear返回值设为01方便后来计算
}
int DayofYear(int y,int m,int d)
{
    //给出某年某月某天计算是该年的第几天
    //思路是计算第m月之前的天数相加即可m-1为之前经过几个月
    //对闰年特殊处理
    int num = d;
    switch(m-1){
        case 11:num += 30;
        case 10:num += 31;
        case 9:num += 30;
        case 8:num += 31;
        case 7:num += 31;
        case 6:num += 30;
        case 5:num += 31;
        case 4:num += 30;
        case 3:num += 31;
        case 2:num += 28 + leapyear(y);
        case 1:num += 31;
        default :
                break;
    }
    return num;
}
int DayBetweenYear(int y1,int y2)
{
    //计算两年之间的距离，默认后者数值大
    int num = 0;
    for(int i = y1;i < y2;i++)
    {
        num += 365 + leapyear(i);
    }
    return num;
}
int week(int y,int m,int d)
{
//给出年月日计算是周几
//一般会给出参考日期比如1900年1月1日为周一
//思路是先计算给出年距参考日期的时间在加上该日在该年的时间,所得时间取余七即可,返回值为对应周的数字，其中周日为0
    return ( DayofYear(y,m,d) + DayBetweenYear(1900,y)) % 7;

}
int  main()
{

    //cout<<DayBetweenYear(2004,2005);
    cout<<DayofYear(2024,2,1);
    //cout<<week(2024,3,6);
    return 0;
}

    return 0;
}
