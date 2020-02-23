#include <iostream>
using namespace std;

// 求a、b两个数的绝对值函数
// 函数名abs、返回值、参数
int abs(int a,int b){
    if(a >= b){
        return a - b;
    }else{
        return b - a;
    }
}


int main()
{
    int a, b;
    cin >> a >> b;
    
    cout << abs(a,b);
    
    return 0;
}
