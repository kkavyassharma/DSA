//Linear Search
#include<iostream>
using namespace std;
void linearsearch(int arr[], int n, int key){
    bool found = false;
    int index;
    for(int i = 0; i<n; i++){
         if(arr[i] == key){
            found = true;
            index = i;
         }
    }
  if(found == true){
    cout<<"The element is found at index "<<index;
  }
  else{
    cout<<"Element not found";
  }
}
int main(){
int arr[20], key, n;
cout<<"Enter the number of elements in the array:";
cin>>n;
cout<<"Enter the key to be found:";
cin>>key;
cout<<"Enter the elements of the array:";
for(int i = 0; i<n; i++){
    cin>>arr[i];
}
linearsearch(arr, n, key);
return 0;
}