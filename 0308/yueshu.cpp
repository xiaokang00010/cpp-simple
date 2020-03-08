#include <iostream>
using namespace std; 
// 定义函数f，用递归的方式计算a和b的最大公约数
int f(int a,int b)
{
	if(b == 0)  return a;
	return f(b,a % b);
	return b;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << f(a, b);
    return 0;
}
    
