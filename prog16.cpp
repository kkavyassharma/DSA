#include<iostream>
using namespace std;
int main(){
int i = 1, n;
cout<<"Enter a number: ";
cin>>n;
while(i<=n){
    int j = 1;
    char ch = 'A';
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