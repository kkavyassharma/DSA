#include<iostream>
using namespace std;
int main(){
int i = 1, n;
char ch = 'A';
cout<<"Enter a number: ";
cin>>n;
while(i<=n){
    int j = 1;
    while (j<=i)
    {
        cout<<ch<<" ";
        j++;
    }
    cout<<endl;
    ch++;
    i++;
}
return 0;
}