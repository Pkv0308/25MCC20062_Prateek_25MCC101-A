#include <bits/stdc++.h>

using namespace std;

bool check(vector<int> &nums,int maxOperations,int mid){
    int opCount=0;
    for(auto it: nums){
        opCount+=(it-1)/mid;
        if(opCount>maxOperations){
            return false;
        }
    }
    
    return true;
}

int minimumSize(vector<int>& nums, int maxOperations) {
        vector<int> copy(nums.begin(),nums.end());
        int low=1;
        int high=1e9;
        int ans;
        while(!(low>high)){
            int mid=low+(high-low)/2;
            if(check(nums,maxOperations,mid)){
                high=mid-1;
                ans=mid;
            }
            else{
                low=mid+1;
            }
        }

        return ans;

    }

int main(){
    vector<int> nums({9});
    cout<<(20/6)-1<<"\n";
    int maxOperations=2;

    cout<<minimumSize(nums,maxOperations);

    return 0;
}