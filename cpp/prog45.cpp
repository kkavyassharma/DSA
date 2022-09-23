#include<iostream>
#include<math.h>
using namespace std;
int main(){
int n, num, bit, ans = 0, i = 0, ones, twos;
cout<<"Enter a number: "<<endl;
cin>>num;
n = (-num);
while(n != 0){
    bit = n&1;
    ans = (bit * pow(10,i)) + ans;
    n = n>>1;
    i++;
}
    ones = (~ans);
    twos = ones + 1;
    cout<<twos;
return 0;
}