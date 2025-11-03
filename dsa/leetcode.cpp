
#include <bits/stdc++.h>
#include <iostream>
using namespace std;


vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int i = 0 , j = 0;
        int temp = 0;
        vector<int> ans;
        while( j < nums.size()){
            //  cout << "outside" << endl;
            if(j - i + 1 < k){
                temp = max(temp , nums[j]);
                j++;
                // cout << "less than" << endl;/
            } else if(j - i + 1 == k){
                // cout << "greater thean than" << endl;
                temp = max(temp , nums[j]);
                ans.push_back(temp);
                i++;
                j++;
            }   
        }
        return ans;
    }


int main() {
  vector<int> arr = {1, 3, -1, -3, 5, 3, 6, 7};
  int size = 3;
  vector<int> ans = maxSlidingWindow(arr, size);
  for(int temp : ans)cout << temp << " ";
  cout << endl;
  return 0;
}