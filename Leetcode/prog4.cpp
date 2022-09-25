//1207Find unique no of occurences
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool uniqueOccurrences(vector<int>& arr){
    vector<int> ans;
    int i, n;
    int count = 1;
    n = arr.size();
    bool final = true;
    sort(arr.begin(), arr.end());
    for(i=0; i<(n-1); i++){
        if(arr[i] == arr[i+1]){
            count = count + 1;
        }
        else{
            ans.push_back(count);
            count = 1; 
            if((n-i) == 2){
                ans.push_back(count);            }
        }
    }
    sort(ans.begin(), ans.end());
    int m = ans.size();
    for(i = 0; i<(m-1); i++){
        if(ans[i] == ans[i+1]){
            final = false;
        }
    }
    return final;
}
int main(){
vector<int> arr;
bool ans;
int n;
cout<<"Enter number of elements in array: ";
cin>>n;
cout<<"Enter the elements of arr: ";
for(int i = 0; i<n; i++){
    int a;
cin>>a;
arr.push_back(a);
}
ans = uniqueOccurrences(arr);
cout<<ans;
return 0;
}