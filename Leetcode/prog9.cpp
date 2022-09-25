//80Duplicates from Sorted array 2
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int removeDuplicates(vector<int>& nums) {
        int i, j;
        int n = nums.size();
        for(i=0; i<(n-2); i++){
            for(j=i+1; j<(n-1); j++){
                if(nums[i] == nums[j+1]){
                    nums[j+1] = INT_MAX;
                }
            }
        }
        sort(nums.begin(), nums.end());
        int count = 0;
        for(i=0; i<n; i++){
            if(nums[i] != INT_MAX)
                count++;
        }
        return count;
    }
int main(){
    vector<int> nums;
    int ans, n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i<n; i++){
        int b;
         cin>>b;
         nums.push_back(b);
    }
ans = removeDuplicates(nums);
cout<<ans;
return 0;
}