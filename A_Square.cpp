#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() { 
 
    int n;
    cin >> n;
    while(n--){
      int a, b, c, d;
      cin >> a >> b >> c >> d;
      if(a == b && b == c && c == d) cout << "YES" << endl;
      else cout << "NO" << endl;
    }

 
    return 0; 
}