#include<iostream>
using namespace std;
int main(){
int n;
bool isprime = 1;
cout<<"Enter the value of n: ";
cin>>n;
for(int i = 2; i<n; i++){
        if(n%2 == 0){
            isprime = 0;
            break;
        }
}
if(isprime == 0) {
    cout<<"Not a Prime Number"<<endl;
}
else{
    cout<<"is a Prime number"<<endl;
}
return 0;
}