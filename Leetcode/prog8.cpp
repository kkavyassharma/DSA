//1Two sum
#include<iostream>
#include<vector>
using namespace std;
vector<int> TwoSum(vector<int>& nums, int target){
    vector<int> ans;
    for(int i = 0; i<nums.size(); i++){
        for(int j = i+1; j<nums.size(); j++){
            if(nums[i] + nums[j] == target){
                ans = {i, j};
            }
        }
    }
    return ans;
}
int main(){
vector<int> ans, nums;
int n, target;
cout<<"Enter the number of elements in the array: ";
cin>>n;
cout<<"Enter the target value:";
cin>>target;
cout<<"Enter the elements of the array:";
for(int i = 0; i<n; i++){
    int b; 
    cin>>b;
    nums.push_back(b);
}
ans = TwoSum(nums, target);
for(int i = 0; i<ans.size(); i++){
    cout<<" "<<ans[i];
}
    return 0;
}