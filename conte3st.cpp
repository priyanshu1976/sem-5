#include <bits/stdc++.h>
using namespace std;
#include <iostream>

void helper(){
  int n;
  cin >> n;
  string str;
  cin >> str;

  for (int i = 2; i < n; i++){
    if(str[i-1] == '1' and str[i] =='0' and str[i-2] == '0'){
      str[i - 1] = '0';
    }
  }

  int c1 = -1, c2 = -1;

  for (int i = 0; i < n; i++){
    if(str[i] == '1'){
      c1 = i;
      break;
    }
  }

  for (int i = n - 1; i >= 0; i--){
    if(str[i] == '1'){
      c2 = i;
      break;
    }
  }

  if(c1 == -1){
    cout << "YES" << endl;
    return;
  }

  for (int i = c1 + 2; i <= c2; i++){
    if(str[i] == '1' && str[i-1] == '0' && str[i-2] == '1'){
      cout << "NO" << endl;
      return;
    }
  }
  cout << "YES" << endl;
}

int main() {

    int t;
    cin >> t;
    while (t--) helper();
}