//max and min of an array
#include<iostream>
using namespace std;
int getmax(int num[], int n){
    int max = INT_MIN;
    for(int i = 0; i < n; i++){
        if(num[i] > max){
            max = num[i];
        }
    }
    return max;
}
int getmin(int num[], int n){
    int min = INT_MAX;
    for(int i = 0; i<n; i++){
        if(num[i] < min){
            min = num[i];
        }
    }
    return min;
}
int main(){
int a[10], ans, x;
cout<<"Enter number of elements in array: ";
cin>>x;
cout<<"Enter the elements of the array: ";
for(int i = 0; i<x; i++){
    cin>>a[i];
}
ans = getmax(a, x);
cout<<"Maximum in array is "<<ans<<endl;
ans = getmin(a,x);
cout<<"Minimum in array is "<<ans<<endl;
return 0;
}