//191D Number of 1 bits.
#include<iostream>
using namespace std;
int hammingWeight(uint32_t n) {
        int count = 0;
        while(n != 0){
            if(n&1 == 1){
               count++;
             }
            n = n>>1;
        }
    return count;
        }
int main(){
uint32_t n;
int ans;
cout<<"Enter a number: ";
cin>>n;
ans = hammingWeight(n);
cout<<"The answer is: "<<ans;
return 0;
}