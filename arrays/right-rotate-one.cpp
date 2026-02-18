#include <bits/stdc++.h>
using namespace std ;

int main(){
    vector<int>nums={12,3,5,6,7,8,9,9,11};
    int n = nums.size();
    int temp = nums[n-1];
    for(int i=n-1;i>0;i--){
        nums[i]=nums[i-1];
    }
    nums[0]=temp;
    for(auto itr : nums){
        cout<<itr<<" ";
    }
    return 0;
}