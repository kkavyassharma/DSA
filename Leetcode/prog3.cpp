//Power of two
#include<iostream>
using namespace std;
bool power(int x){
    int ans = 1;
    for(int i = 0; i<=30; i++){
        if(x == ans){
            return true;
        }
        if(ans<INT_MAX/2){
            ans = ans*2;
        }
    }
    return false;
}
int main(){
int n;
cout<<"Enter a number: ";
cin>>n;
cout<<power(n);
return 0;
}