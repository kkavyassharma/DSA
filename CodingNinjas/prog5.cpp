//Pair Sum
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> pairSum(vector<int> &arr, int s){
  vector<vector<int>> ans;
    int i, j, n;
    n = arr.size();
    sort(arr.begin(), arr.end());
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(arr[i] + arr[j] == s){
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    return ans;
}
int main(){
vector<int> nums;
vector<vector<int>> ans;
int n, s;
cout<<"Enter the length of nums :";
cin>>n;
cout<<"Enter target: ";
cin>>s;
cout<<"Enter the elements of the array: ";
for(int i = 0; i<n; i++){
    int b;
    cin>>b;
    nums.push_back(b);
}
ans = pairSum(nums, s);
for(int i = 0; i<n; i++){
    vector<int> a;
    cout<<a[i];
}
return 0;
}