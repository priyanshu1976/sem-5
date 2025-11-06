#include <bits/stdc++.h>
using namespace std;
#include <iostream>
int maximumSubarraySum(vector<int>& arr, int k) {

    unordered_map<int , int> mp;
    long long sum = 0 , ans = LONG_LONG_MIN;
    int i = 0, j = -1;

    while (j + 1 < arr.size())   // ✅ ensure safe access
    {
        j++;                      // ✅ expand window
        mp[arr[j]]++;
        sum += arr[j];

        if (j - i + 1 == k)  // ✅ window hit size k
        {
            // ✅ If all distinct
            if (mp.size() == k) 
                ans = max(ans, sum);

            // ✅ Slide window
            mp[arr[i]]--;
            if (mp[arr[i]] == 0) 
                mp.erase(arr[i]);
            sum -= arr[i];
            i++;
        }
    }

    return (ans == LONG_LONG_MIN) ? 0 : ans; // in case no valid window
}

bool check(string t , int i , int j , string s){
    unordered_map<char, int> mp;
    for (int k = i; k <= j; k++){
        mp[t[k]]++;
        mp[s[k - i]]--;
        if(mp[t[k]] == 0) mp.erase(t[k]);
        if(mp[s[k-i]] == 0) mp.erase(s[k-i]);
    }

    return mp.size() == 0;
}

int countAnagrams(string target , string str){
    int i = 0, j = 0 , ans = 0;
    while(j < target.size()){
        int size = j - i + 1;
        if (size < str.size())
        {
            j++;
        }
        else if (size == str.size())
        {
            if(check(target , i , j , str)){
                ans++;
                cout << "this is --->: " << target.substr(i, size) << endl;
            }
            i++;
            j++;
        }
    }
    return ans;
}

int main() {
    string t = "abcbacabcabbac";
    string s = "caba";
    int ans = countAnagrams(t, s);
    cout << ans << endl;
    return 0;
}
