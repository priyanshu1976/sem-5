#include <bits/stdc++.h>
using namespace std;
#include <iostream>

bool check(string &str) {
    int size = str.size();
    vector<int> xero;

    for (int i = 0; i < size; i++) {
        if (str[i]=='0')xero.push_back(i);
    }

    if (xero.empty()) return true;
    vector<char>cl(size, 0),cr(size, 0);

    for (int pos : xero) {
        cl[pos] =(pos == 0)||(str[pos - 1] == '0') ||
                        (pos >= 2 && str[pos - 1] == '1'&&str[pos - 2] == '0');
        cr[pos] =(pos == size - 1)||(str[pos + 1] == '0')||
                        (pos + 2 < size && str[pos + 1]=='1'&&str[pos +2]== '0');
    }

    int tzero= xero.size();
    int inds= 0;

    while (inds <tzero) {

        int j = inds;
        while (j+ 1 <tzero &&xero[j+1] == xero[j]+2 && str[xero[j]+1]=='1') {
            ++j;
        }

        int srt= xero[inds];
        int sts =(cl[srt]?1:0)|(cr[srt]?2 : 0);
        if (!sts) return false;

        for (int t = inds + 1;t <= j;t++) {
            int curPos= xero[t];
            int nextsts= 0;
            if ((sts &1)&&cr[curPos])nextsts|= 2;
            if ((sts &2) && cl[curPos]) nextsts|= 1;
            sts = nextsts;
            if (!sts) return false;
        }
        inds= j+1;
    }

    return true;
}

int main() {

    int testCases;
    if (!(cin >> testCases)) return 0;

    while (testCases--) {
        int n;
        string str;
        cin >> n >> str;
        cout << (check(str) ?"YES":"NO") << "\n";
    }

    return 0;
}
