#include<iostream>
using namespace std;
//利用函数重载验证混合运算升级方法
void proveOperator(int c)
{
    cout<<c<<" is int "<<endl;
}
void proveOperator(double c)
{
    cout<<c<<" is double"<<endl;
}
void proveOperator(long c )
{
    cout<<c<<" is long"<<endl;
}
void proveOperator(float c)
{
    cout<<c<<" is float"<<endl;
}
int main()
{
    int a = 12;
    double b = 2.5;
    proveOperator(a+b); 
    return 0;
}