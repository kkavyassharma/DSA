#include<iostream>
using namespace std;
int main(){
int i = 1, n, count;
cout<<"Enter a number: ";
cin>>n;
count = n;
while(i<=n){
    int j = 1;
    while(j<=count){
        cout<<j;
        j++;
    }
    int k = (2*i-2);
    while(k>0){
        cout<<"*";
        k--;
    }
    int l = count;
    while(l>0){
        cout<<l;
        l--;
    }
    cout<<endl;
    i++;
    count--;
}
return 0;
}