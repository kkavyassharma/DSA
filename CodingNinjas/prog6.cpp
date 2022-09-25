//Intersection of Two Arrays II
#include<iostream>
using namespace std;
void intersection(int *input1, int *input2, int size1, int size2)
{
   int i, j;
    for(i=0; i<size1; i++){
        for(j=0; j<size2; j++){
            if(input1[i] == input2[j]){
                cout<<input1[i]<<" ";
                input1[i] = -222222222;
                input2[j] = -111111111;
            }
        }
    }

}
int main(){
int arr1[20], arr2[20];
int n, m;
cout<<"Enter length of arr1: ";
cin>>n;
cout<<"Enter length of arr2: ";
cin>>m;
cout<<"Enter the elements of arr1: ";
for(int i= 0; i<n; i++){
    cin>>arr1[i];
}
cout<<"Enter the elements of arr1: ";
for(int i= 0; i<m; i++){
    cin>>arr2[i];
}
intersection(arr1, arr2, n, m);
return 0;
}