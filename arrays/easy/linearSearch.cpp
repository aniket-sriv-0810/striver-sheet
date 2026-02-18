#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int>&nums , int key){
    int n=nums.size();
    for(int i=0;i<n;i++){
        if(nums[i] == key ) return i;
    }
    return -1;
}
int main(){
    vector<int>nums={12,4,5,62,1,3,55,10};
    int key=5;
    cout<<"res->"<<linearSearch(nums,key)<<endl;
    return 0;
}

//TC:O(n)
//SC:O(1)