#include <bits/stdc++.h>
using namespace std;

void revArr(vector<int>&nums){
    int n  = nums.size();
    int i=0 , j =n-1;
    while(i<=j){
        swap(nums[i],nums[j]);
        i++;
        j--;
    }
}
int main(){
    vector<int>nums={12,23,45,6,7,1};
    revArr(nums);
    for(auto itr:nums){
        cout<<itr<<" ";
    }
    return 0;
}
//TC:O(n)
//SC:O(1)