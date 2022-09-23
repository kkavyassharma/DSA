//Switch Case
#include<iostream>
using namespace std;
int main(){
int a, b;
int ans = 0;
cout<<"Enter two numbers: ";
cin>>a>>b;
char op;
cout<<"Enter the operation to be performed: ";
cin>>op;
switch (op)
{
case '+':
       ans = (a + b); 
    break;
case '-':
       ans = (a - b);
case '*':
       ans = (a * b);
case '/':
       ans  = (a/b);
default:
    break;
}
cout<<ans;
return 0;
}