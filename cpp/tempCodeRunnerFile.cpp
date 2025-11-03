#include <bits/stdc++.h>
using namespace std;
#include <iostream>

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        bool check=false;
        if (n == 3 && s=="101") check=true;
        else if (n==4) {
            if (s == "1101"||s =="1011") check= true;
        } else if (n > 4) {
            if (s.substr(0,4) == "1011"|| s.substr(n-4)=="1101" || s.find("11011")!= string::npos)
                check = true;
        }
        if(check) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}
