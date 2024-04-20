#ifndef STOCK__H
#define STOCK__H
#include<string>
//声明类Stock的方法

class Stock{
    private:        //默认为private不必使用private关键字
                    //结构体默认为public，类默认为private
    std::string name;
    int password;
    public:
    void showName();
    void showPassWord();
    void acquire(std::string st,int n);

};

#endif
