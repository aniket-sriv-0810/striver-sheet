#include <bits/stdc++.h>
using namespace std;

int kLargest(vector<int>&nums , int k){
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int x : nums){
        pq.push(x);
        if(pq.size() > k){
            pq.pop();
        }
    }
    return pq.top();
}
int main(){
     vector<int> nums={12,12,34,67,34,5,67,82,-1,-12,82};
     int k=7;
     cout<<"result -> "<<kLargest(nums,k)<<endl;
    return 0;
}
//TC:O(n * logn)
//SC:O(n)