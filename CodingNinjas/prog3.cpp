// Intersection of two sorted arrays
#include<iostream>
#include<vector>
using namespace std;
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    int i = 0, j = 0;
   vector<int> ans;
   while(i<n && j<m){
       
       if(arr1[i] == arr2[j])
       {
           ans.push_back(arr1[i]);
           i++;
           j++;
       }
       else if (arr1[i] < arr2[j]){
            i++;
       }
       else {
           j++;
       }
   }
   return ans;
}
int main(){
vector<int> arr1, arr2, ans;
int n, m;
cout<<"Enter length of arr1: ";
cin>>n;
cout<<"Enter length of arr2: ";
cin>>m;
cout<<"Enter the elements of arr1: ";
for(int i = 0; i<n; i++){
    int b; 
    cin>>b; 
    arr1.push_back(b);
}
cout<<"Enter the elements of arr2: ";
for(int i = 0; i<n; i++){
    int b; 
    cin>>b; 
    arr2.push_back(b);
}
ans = findArrayIntersection(arr1, n, arr2, m);
for(int i = 0; i<ans.size(); i++){
    cout<<ans[i];
}
return 0;
}