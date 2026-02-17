#include <bits/stdc++.h>
using namespace std;

int largest(vector<int>&nums){
    //Main Logic
    int n = nums.size();
    int largest=INT_MIN;
    for(int i=0;i<n;i++){
        if(nums[i]>largest) largest=nums[i];
    }
    return largest;
    //STL
    return *max_element(nums.begin() , nums.end());
}
int main(){
    vector<int> nums={12,34,5,67,82,-1,-12,82};
    cout<<"Max ->"<<largest(nums)<<endl;
    return 0;
}