#include<iostream>
using namespace std;
int main(){
int i = 1, n;
cout<<"Enter a number: ";
cin>>n;
while(i<=n){
    int space = (n-i);
    while(space){
        cout<<" ";
        space--;
    }
    int j = 1;
    while(j<=i){
        cout<<j;
        j++;
    }
    int k = i-1;
    while(k>0){
        cout<<k;
        k--;
    }
    cout<<endl;
    i++;
}
return 0;
}