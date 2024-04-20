#include<iostream>
#include"stock.h"
#include<string>
using std::cout;

//定义类Stock的方法
void Stock::showName()//使用类名+作用域解析符::定义函数
{
    cout<<name;
}

void Stock::showPassWard()
{
    cout<<password;
}

void Stock::acquire(string st,int n)
{
    name = st;
    password = n;
    
}