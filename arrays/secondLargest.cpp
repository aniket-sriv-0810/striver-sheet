#include<bits/stdc++.h>
using namespace std;

int secLargest(vector<int>&nums){
    int n = nums.size();
    int largest=INT_MIN;
    int secLargest=INT_MIN;
    for(int i=0;i<n;i++){
        if(nums[i] > largest ){
            secLargest=largest;
            largest=nums[i];
        }
        else if(nums[i] < largest && nums[i] > secLargest) {
            secLargest = nums[i];
    }
    return secLargest != INT_MIN ? secLargest : -1;
}
}
int main(){
    vector<int> nums={12,12,34,67,34,5,67,82,-1,-12,82};
    cout<<"Sec Largest -> "<<secLargest(nums)<<endl;
    return 0;
}
//Tc:O(n)
//Sc:O(1)