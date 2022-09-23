#include<iostream>
using namespace std;
int main(){
int n, i=2, flag = 0;
cout<<"Enter a number: ";
cin>>n;
while(i<n){
    if(n%i == 0){
    flag = 1;
    }
    else{
        flag = 0;
    }
    i = i+1;
}
if(flag == 1){
    cout<<"Number is not prime";
}
else{
    cout<<"Number is prime";
}
return 0;
}