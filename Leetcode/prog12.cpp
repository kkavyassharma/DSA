//442 Find All Duplicates in an Array
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        int n;
        n = nums.size()-1;
        sort(nums.begin(), nums.end());
        for(int i=0; i<n; i++){
                if(nums[i] == nums[i+1]){
                    ans.push_back(nums[i]);
                }
        }
       return ans; 
        }
int main(){
vector<int> nums, ans;
int n; 
cout<<"Enter the number of elements in array: ";
cin>>n;
cout<<"Enter the elements of array: ";
for(int i=0; i<n; i++){
    int b; 
    cin>>b;
    nums.push_back(b);
}
ans = findDuplicates(nums);
for(int i = 0; i<ans.size(); i++){
    cout<<" "<<ans[i];
}
return 0;
}