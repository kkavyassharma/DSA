#include<iostream>
using namespace std;
int main(){
int i = 1, n;
char ch = 'A';
cout<<"Enter a number: ";
cin>>n;
while(i<=n){
    int j = 1;
    while (j<=n)
    {
        cout<<ch<<" ";
        ch = ch + 1;
        j++;
    }
    cout<<endl;
    i++;
}
return 0;
}