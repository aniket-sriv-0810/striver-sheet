#include <bits/stdc++.h>
using namespace std;

int thirdLargest(vector<int>&nums){
    long long a = LLONG_MIN, b = LLONG_MIN , c= LLONG_MIN;
    for(int x : nums){
          if (x == a || x == b || x == c)
            continue;
        if(x>a){
            c=b;
            b=a;
            a=x;
        }
        else if(x>b){
            c=b;
            b=x;
        }
        else if(x>c){
            c=x;
        }
    }
    return c == LLONG_MIN ? a:c;
}

int main(){
    vector<int> nums={12,12,34,67,34,5,67,82,-1,-12,82};
    cout<<"Result -> "<<thirdLargest(nums)<<endl;
    return 0;
}

//TC:O(n)
//SC:O(1)