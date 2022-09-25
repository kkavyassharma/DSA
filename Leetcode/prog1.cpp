//1009complement of base 10 integer
#include<iostream>
using namespace std;
int complement(int x){
    int mask = 0, ans;
    int m = x;
    if(x == 0){
        return 1;
    }
    while(m!=0){
        mask = (mask<<1)| 1;
        m = m>>1;
    }
    ans = ((~x) & mask);
    return ans;
}
int main(){
int n, a;
cout<<"Enter a number: ";
cin>>n;
a = complement(n);
cout<<"Complement of "<<n<<" is "<<a<<endl;
return 0;
}
