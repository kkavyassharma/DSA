#include<iostream>
using namespace std;
int main(){
int i = 1, n;
cout<<"Enter a number: ";
cin>>n;
while(i<=n){
    int space = 1;
    while(space<=(i-1)){
        cout<<" ";
        space = space + 1;
    }
    int j = n;
    while(j>=i){
        cout<<i;
        j = j-1;
    }
    cout<<endl;
    i++;
}
return 0;
}