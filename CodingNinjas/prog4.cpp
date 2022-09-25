//find Duplicate
#include<iostream>
#include<vector>
using namespace std;
int findDuplicate(vector<int> &arr) 
{
	int i, n, ans = 0;
    n = arr.size();
    for(i=0; i<n; i++){
        ans = ans^arr[i];
    }
    for(i=0; i<n; i++){
        ans = ans^i;
    }
    return ans;
}

int main(){
vector<int> nums;
int n, ans;
cout<<"Enter length of array: ";
cin>>n;
cout<<"Enter the elements of array: ";
for(int i = 0; i<n; i++){
    int b; 
    cin>>b;
    nums.push_back(b);
}
ans = findDuplicate(nums);
cout<<ans;
return 0;
}