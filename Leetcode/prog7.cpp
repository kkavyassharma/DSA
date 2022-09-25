//27Remove element
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int removeElement(vector<int>& nums, int val){
    int i = 0; 
    int n = nums.size();
    int count = 0; 
    while(i<n){
        if(nums[i] == val){
            nums[i] = INT_MAX;
        }
        i++;
    }
    sort(nums.begin(), nums.end());
    i=0;
    while(i<n){
        if(nums[i] != INT_MAX){
            count++;
        }
        i++;
    }
    return count;
}
int main(){
vector<int> nums;
int n, count, value;

cout<<"Enter the number of elements in the array:";
cin>>n;
cout<<"Enter the element: ";
cin>>value;
cout<<"Enter the elements of the array:";
for(int i = 0; i<n; i++){
    int b;
    cin>>b;
    nums.push_back(b);
}
count = removeElement(nums, value);
cout<<count;
return 0;
}