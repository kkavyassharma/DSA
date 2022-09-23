#include<iostream>
using namespace std;
int fib(int n){
    int num1 = 0, num2 = 1, nth = 0, i;
    for(i = 3; i<=n; i++){//making fibonacci series
        nth = num1+num2; 
        num1 = num2;
        num2 = nth;
    }
    return nth;
}
int main(){
int ans, n;
cin>>n;//taking input
ans = fib(n);
cout<<n<<"th value of fibonacci series is "<<ans;
return 0;
}