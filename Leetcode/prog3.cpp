//35Search Insert Position
#include<iostream>
#include<vector>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int s = 0, e = n-1;
        int mid = s + (e-s)/2;
        while(s<=e){
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid]<target){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
            mid = s + (e-s)/2;
        }
       return s;
    }
int main(){
vector<int> nums;
int target, n, ans;
cout<<"Enter the number of elements in the array:";
cin>>n;
cout<<"Enter target: ";
cin>>target;
cout<<"Enter the elements of the array:";
for(int i = 0; i<n; i++){
    int b; 
    cin>>b;
    nums.push_back(b);
}
ans = searchInsert(nums, target);
cout<<ans;
return 0;
}