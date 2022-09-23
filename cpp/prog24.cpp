#include<iostream>
using namespace std;
int main(){
int i = 1, n;
cout<<"Enter a number: ";
cin>>n;
while (i<=n)
{
    int j = n;
    while(j>=i){
        cout<<"*";
        j = j-1;
    }
    cout<<endl;
    i++;
}

return 0;
}