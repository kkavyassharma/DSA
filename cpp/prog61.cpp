//Swap alternate elements in an array
#include<iostream>
using namespace std;
void swapalternate(int arr[], int n){
    int i = 0; 
    while(i<(n-2)){
        swap(arr[i], arr[i+1]);
        i = i+2;
    }
}
int main(){
int arr[20], n;
cout<<"Enter the number of elements in array: ";
cin>>n;
cout<<"Enter the elements of array: ";
for(int i = 0; i<n; i++){
    cin>>arr[i];
}
swapalternate(arr, n);
for(int i = 0; i<n; i++){
    cout<<" "<<arr[i]<<" ";
}
return 0;
}