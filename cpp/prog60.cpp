//reverse an array
#include<iostream>
using namespace std;
void reversearr(int arr[], int n){
    int s=0, e=n-1;
    while(s<e){
        swap(arr[s++], arr[e--]);
    }
}
int main(){
int arr[20], n, ans[20];
cout<<"Enter the number of elements in an array: ";
cin>>n;
cout<<"Enter the elements of the array: ";
for(int i=0; i<n; i++){
    cin>>arr[i];
}
reversearr(arr, n);
for(int i=0; i<n; i++){
    cout<<" "<<arr[i]<<" ";
}
return 0;
}