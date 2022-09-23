#include<iostream>
using namespace std;
int main(){
int i = 1, n, count = 1;
cout<<"Enter a number: ";
cin>>n;
while(i<=n){
    int space = n;
    while(space>i){
        cout<<" ";
        space--;
    }
    int j = 1;
    while(j<=i){
        cout<<count;
        count++;
        j++;
    }
    cout<<endl;
    i++;
}
return 0;
}