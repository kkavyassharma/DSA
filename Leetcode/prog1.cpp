//Reverse Integer
#include<iostream>
using namespace std;
int reverse(int x){
    int ans = 0, rem;
    while(x>0){
        rem = x%10;
        ans = rem + (ans * 10);
        x = x/10;
    }
    return ans;
}
int main(){
int n, a;
cout<<"Enter a number:";
cin>>n;
a = reverse(n);
cout<<n<<" after reversing is "<<a<<endl;
return 0;
}