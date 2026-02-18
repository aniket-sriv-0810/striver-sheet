#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums={12,4,5,7,8,1,3,4,22,4,66,7,7};
    int d = 5;
    int n = nums.size();

    d=d%n;
    reverse(nums.begin() , nums.begin()+d);
    reverse(nums.begin()+d , nums.end());
    reverse(nums.begin() , nums.end());
    for(auto itr : nums){
        cout<<itr<<" ";
    }
    return 0;
}