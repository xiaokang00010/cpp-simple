#include <iostream>
using namespace std;

// 计算第n个斐波那契数
// 函数名:fib、返回值、参数
int fib(int n){
    if(n <= 2){
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}


int main()
{
    int n;
    cin >> n;
    cout << fib(n);
    return 0;
}
