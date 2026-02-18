#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>&nums , int i){
    int n = nums.size();
    if(i >= n/2) return true;

    if(nums[i] > nums[i+1]) return false;

    return isSorted(nums,i+1);
}
int main(){
    vector<int>nums={1,23,4,4,5};
    vector<int>nums1={1,2,3,4,4,5};
    cout<<"check 1 - "<<isSorted(nums,0)<<endl;
    cout<<"check 2 - "<<isSorted(nums1,0)<<endl;
    return 0;
}