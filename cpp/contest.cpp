#include <bits/stdc++.h>
using namespace std;
#include <iostream>

int main()
{

    cout<<"start"<<endl;
    int t;
    cin >> t;
    while (t > 0)
    {

        vector<int> arr;
        int size, temp;
        cin >> size;

        if (size == 1 || size == 2)
        {
            cout << "YES" << endl;
        }

        for (int i = 1; i < size-1; i++)
        {
            cin >> temp;
            arr.push_back(temp);
        }
        int temp1 = size;
        bool f = true;
        while(size--){
            bool check = true;
        for (int i = 1; i < size-1; i++)
        {
            if (arr[i] == temp1)
            {
                if ((arr[i - 1] - 1 != arr[i]) or (arr[i] != arr[i + 1] - 1))
                {
                    check = false;
                    cout << "NO" << endl;
                }
            }
        }
        if(!check) {
            cout<<"NO"<<endl;
            f = false;
            break;
        }
        temp1--;
    }
        if (f) cout << "YES" << endl;
        t--;
    }
    return 0;
}