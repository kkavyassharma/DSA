/*#include<iostream>
using namespace std;
int main(){
int i = 1, n;
char ch = 'A';
cout<<"Enter a number: ";
cin>>n;
while(i<=n){
    int j = 1;
    while(j<=n){
        cout<<ch<<" ";
        j++;
    }
    cout<<endl;
    ch = ch+1;
    i++;
}
return 0;
} OR */
#include<iostream>
using namespace std;
int main(){
int i = 1, n;
cout<<"Enter a number: ";
cin>>n;
while(i<=n){
    int j = 1;
    while(j<=n){
  char ch = ('A'+ i - 1);
     cout<<ch<<" ";
     j++; 
    }
    cout<<endl;
    i++;
}
return 0;
}