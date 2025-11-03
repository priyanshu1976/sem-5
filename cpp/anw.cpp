#include <bits/stdc++.h>
#include <iostream>
using namespace std;


bool pal (string s){
    for (int i = 0; i < s.size() / 2; i++){
        if(s[i] != s[s.size() - i -1])  return false;

    }
    return true;
}

bool con1(string sub){
    for (int i = 1; i < sub.size(); i++){
        if(sub[i-1] > sub[i]) return false;

    }
    return true;
}


int main(){

    int t;
    cin >> t;
    while(t> 0){
        int n;
        string s;
        cin >> n >> s;
        bool flag = false;

        if(pal(s)){
            cout << 0 << endl;
            cout << endl;
            flag = true;
        }

        if(!flag){
            for (int l = 0; l < n && !flag; l++){
                for (int r = l; r < n && !flag; r++){
                    string sub = s.substr(l, r - l + 1);
                    if(!con1(sub)) continue;

                    string rem = s.substr(0, l) + s.substr(r + 1);

                    if(pal(rem)){
                        flag = true;
                        cout << r - l + 1 << endl;
                        for (int i = l + 1; i <= r + 1; i++){
                            cout << i << (i == r + 1 ? '\n' : ' ');
                        }
                    }
                }
            }
        }

        if(!flag) cout << -1 << endl;

        t--;
    }
    return 0;
}