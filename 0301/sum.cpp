#include <bits/stdc++.h>
using namespace std;
int n,a[110];
int f(int n){
  if (n == 1)  return a[1];
  return f(n - 1) + a[n]
}

int main(){
  cin >> n;
  for(int i = 1;i <= n;i++){
    cin >>  a[i];
  }
  cout <<　f(n);
}
