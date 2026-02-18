#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums={1,1,2,3,3,4,4};
    int ans=0;
    for(auto x : nums){
        ans = ans ^ x;
    }
    cout<<"Single no -> "<<ans<<endl;
    return 0;
}