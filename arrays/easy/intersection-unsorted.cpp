#include <bits/stdc++.h>
using namespace std;

vector<int>interArr(vector<int>&nums1,vector<int>&nums2){
    unordered_set<int>st(nums1.begin() , nums1.end());
    vector<int>ans;
    for(auto it : nums2){
        if(st.find(it) != st.end()){
            ans.push_back(it);
            st.erase(it);
        }
    }
    return ans;
}
int main(){
      vector<int>nums1={9,1,27,25,38,34,69};
    vector<int>nums2={69,25,65,29,25,70,9};
    vector<int>res = interArr(nums1,nums2);
    for(auto itr : res){
        cout<<itr<<" ";
    }
    return 0;
}