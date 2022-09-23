//Decimal to binary
#include<iostream>
#include<math.h>
using namespace std;
int main(){
int n;
cout<<"Enter a number: ";
cin>>n;
int i = 0, ans = 0;
while(n!=0){
    int bit = n&1;//remainder
    ans = (bit * pow(10,i)) + ans;
    n = n>>1;//dividing
    i++;
}
cout<<"Answer is "<<ans<<endl;
return 0;
}