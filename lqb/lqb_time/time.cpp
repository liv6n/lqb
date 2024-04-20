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
int Days(int y1,int m1,int d1,int y2,int m2,int d2)
{
    //计算两个日期之间的天数
    //法1直接计算
    /*
    return DayBetweenYear(y1,y2)+DayofYear(y1,m1,d1)-DayofYear(y2,m2,d2)+1;
    */
    //默认相邻日期之间差两天
    //法2累加推出

}

int  main()
{

    //cout<<DayBetweenYear(2004,2005);
    //cout<<DayofYear(2024,2,1);
    //cout<<week(2024,3,6);
    cout<<Days(2024,2,8,2024,2,7);
    return 0;
}
//字符串
