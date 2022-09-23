#include<iostream>
using namespace std;
int AP(int n){
    int nth;
    nth = (3*n + 7);
    return nth;
}
int main(){
    int num, ans;
    cin>>num;
    ans = AP(num);
    cout<<num<<"th term of AP is "<<ans<<endl;
return 0;
}