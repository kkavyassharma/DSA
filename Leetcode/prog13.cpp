//1281 Subtract the Product and Sum of Digits of an Integer
#include<iostream>
using namespace std;
int subtractProductAndSum(int n) {
        int pro = 1;
        int sum = 0;
        while(n!=0){
            int digit = n % 10;
            pro = pro * digit;
            sum = sum + digit;
            n = n / 10;
        }
        int sub = pro - sum;
        return sub;
    }
int main(){
int n, ans;
cout<<"Enter a number:";
cin>>n;
ans = subtractProductAndSum(n);
cout<<"Subtraction of the Product and Sum of Digits of an Integer: "<<ans;
return 0;
}