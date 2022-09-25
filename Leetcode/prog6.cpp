//26Remove Duplicates from sorted array
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int removeDuplicates(vector<int>& nums){
int i, count = 0; 
int n = nums.size();
for(i = 0; i<n-1; i++){
    if(nums[i] == nums[i+1]){
        nums[i] = INT_MAX;
    }
}
sort(nums.begin(), nums.end());
for(i=0; i<n; i++){
    if(nums[i] != INT_MAX){
        count++;
    }
}
  return count;
}
int main(){
vector<int> nums;
int n, count;
cout<<"Enter the number of elements in the array:";
cin>>n;
cout<<"Enter the elements of the array:";
for(int i = 0; i<n; i++){
    int b;
    cin>>b;
    nums.push_back(b);
}
count = removeDuplicates(nums);
cout<<count;
return 0;
}