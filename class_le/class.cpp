#include<iostream>
#include"stock.h"
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Stock lil;
    lil.acquire(lil,4);
    lil.showName();
    lil.showPassWord();
    return 0;
}