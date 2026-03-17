#include <bits/stdc++.h>

using namespace std;

int longestMountain(vector<int>& arr) {
        int ans = 0;
        int n = arr.size();

        if (n < 3)
            return 0;
        for (int i = 1; i < n - 1; i++) {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {

                int left = i;
                int right = i;

                while (left > 0 && arr[left] > arr[left - 1]) {
                    left--;
                }

                while (right < n - 1 && arr[right] > arr[right + 1]) {
                    right++;
                }

                ans = max(ans, right - left + 1);
            }
        }
        return ans;
    }

int main(){
    vector<int> arr({2,2,2});

    cout<<longestMountain(arr);

    return 0;
}