//Find Unique element
#include<iostream>
using namespace std;
int Unique(int arr[], int n){
    int ans = 0;
    for(int i = 0; i<n; i++){
        ans = ans^arr[i];//a^a == 0
    }
    return ans;
}
int main(){
int arr[20], n, ans;
cout<<"Enter the number of elements in the array: ";
cin>>n;
cout<<"Enter the elements in the array: ";
for(int i = 0; i<n; i++){
    cin>>arr[i];
}
ans = Unique(arr, n);
cout<<"The unique element is "<<ans;
return 0;
}