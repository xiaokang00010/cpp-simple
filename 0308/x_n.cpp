#include <iostream>
using namespace std; 
// 定义函数f，使用递归的方式计算x的n次方
int f(int x, int n){
    if(n == 0)  return 1;
    return f(x, n - 1) * x;
}

int main()
{
    int x, n;
    cin >> x >> n;
    cout << f(x, n);
    return 0;
}
    
