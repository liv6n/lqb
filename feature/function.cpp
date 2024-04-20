#include<iostream>
#include"function.h"
using namespace std;
//阶乘
int fact(int n)
{
    if(n == 1)
        return 1;
    else
        return n * fact(n - 1);
}

//求和，第二个为默认参数
int sum(int m,int n = 0)
{
    return m + n;
}