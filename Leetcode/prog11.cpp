//344 Reverse String
#include<iostream>
#include<vector>
using namespace std;
void reverseString(vector<char>& s) {
        int st = 0;
        int e = s.size() - 1;
        while(st<e){
            swap(s[st++], s[e--]);
        }
    }
int main(){
vector<char> st;
int n;
cout<<"Enter the number of char in the string: ";
cin>>n;
cout<<"Enter the string: ";
for(int i=0; i<n; i++){
    char ch;
    cin>>ch;
    st.push_back(ch);
}
reverseString(st);
for(int i = 0; i<n; i++){
    cout<<st[i];
}
return 0;
}