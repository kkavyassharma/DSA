#include<iostream>
using namespace std;
int bits(int num){
    int n = 0;
    while(num != 0){
        if(num & 1 == 1)//checking for 1 in bits of num
        {
            n++;
        }
       num = num>>1;
}
   return n;
}
int main(){
int num1, num2, bits_num1, bits_num2;
cin>>num1>>num2;
bits_num1 = bits(num1);//calling function bits for num1
bits_num2 = bits(num2);//calling function bits for num2
cout<<"bits = "<<bits_num1 + bits_num2;
return 0;
}