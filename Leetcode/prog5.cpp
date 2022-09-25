//7.Reverse Integer
#include<iostream>
using namespace std;
int reverse(int n){
    int rem, ans = 0;
    int x = n;
    while(x!=0){
        rem = x % 10;
        ans = (ans * 10) + rem;
        x = x/10;
    }
    return ans;
}
int main(){
int n, ans;
cout<<"Enter a number: ";
cin>>n;
ans = reverse(n);
cout<<"Reversed number is :"<<ans;
return 0;
}