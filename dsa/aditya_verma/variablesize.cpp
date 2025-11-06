#include <bits/stdc++.h>
using namespace std;
#include <iostream>

int maxksum(vector<int> arr , int k){

  int i = 0, j = 0 , ans = INT_MIN , temp = 0 ;

  while(j < arr.size()){
    temp += arr[j];
    if(temp == k){
      // sum of the subarr = k
      cout << "this sub arr is" << endl;
      for (int k = i; k <= j; k++){
        cout << arr[k] << " ";
      }
      ans = max(ans, j - i + 1);
      cout << "ans:" << ans << endl;
      cout << endl;
      cout << "-------------" << endl;
    }
    else if (temp > k)
    {
      temp -= arr[i];
      i++;
    }
    j++;
    }
    cout << "-------ans-----------------ans-----------------ans----------" << endl;
    return ans;
}

int main() {

  
  vector<int> arr = {4, 2, 3, 5, 1, 1, 1, 1, 1, 0};
  int k = 5;
  cout << maxksum(arr, k) << endl;

  return 0;
}
