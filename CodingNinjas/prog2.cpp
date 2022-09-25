// Pair Sum
#include<iostream>
#include<vector>
using namespace std;
int pairSum(vector<int> &arr, int n, int target){
	// Write your code here.
    int s=0, e=n-1;
    int count = 0;
   while(s<e){
        if(arr[s] + arr[e] == target){
            count++;
            s++;
            e--;
        }
       else if(arr[s] + arr[e] > target){
           e--;
       }
       else {
           s++;
       }
    }
    if(count == 0){
        count = -1;
    }
    return count;
}
int main(){
vector<int> nums;
int n, ans, target;
cout<<"Enter length of array: ";
cin>>n;
cout<<"Enter target: ";
cin>>target;
cout<<"Enter the elements of array: ";
for(int i = 0; i<n; i++){
    int b; 
    cin>>b;
    nums.push_back(b);
}
ans = pairSum(nums, n, target);
cout<<ans;
return 0;
}