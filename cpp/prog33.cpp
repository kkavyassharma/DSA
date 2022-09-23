#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the value of n"<<endl;
cin>>n;
cout<<"counting from 1 to n"<<endl;
for(int i = 1; i<n; i++){
    cout<< i << endl;
}
//or 
int i = 1;
for(; ; ){
    if(i<n)
    {
        cout<< i << endl;
    }
    else{
        break;
    }
    i++;
}
//or 
for(int a = 0, b = 1; a>=0 && b>=1; a--, b--){
    cout<<a <<" "<< b <<endl;
}
return 0;
}