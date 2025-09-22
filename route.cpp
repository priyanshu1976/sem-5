#include <bits/stdc++.h>
using namespace std;
#include <iostream>

// Function to check if start->end is a sub-route of given route
bool isSubRoute(const vector<string>& route, const string& startQuery, const string& destQuery) {
    auto itStart = find(route.begin(), route.end(), startQuery);
    if (itStart == route.end()) return false; // start not found

    auto itDest = find(itStart, route.end(), destQuery);
    if (itDest == route.end()) return false; // destination not found after start

    return true; // found in order
}

int main() {
    // Define multiple routes
    vector<vector<string>> routes = {
        {"A", "B", "C", "D", "E", "F"},
        {"A", "B", "C", "V"},
        {"A", "B", "C"},
        {"X", "Y", "Z"},
        {"B", "C", "D"},
        {"L", "M", "N", "O", "P"},
        {"Q", "R", "S", "T"},
        {"U", "V", "W", "X", "Y", "Z"},
        {"G", "H", "I", "J"},
        {"A", "D", "G", "J"},
        {"M", "N", "O"},
        {"P", "Q", "R", "S", "T", "U"},
        {"C", "E", "G", "I"},
        {"F", "H", "J", "L"},
        {"K", "L", "M", "N", "O", "P", "Q"}
    };

    // Get user input
    string startQuery, destQuery;
    cout << "Enter start: ";
    cin >> startQuery;
    cout << "Enter destination: ";
    cin >> destQuery;

    bool found = false;
    cout << "\nMatching Routes for " << startQuery << " -> " << destQuery << ":\n";

    for (const auto& route : routes) {
        if (isSubRoute(route, startQuery, destQuery)) {
            found = true;
            for (const auto &stop : route) {
                cout << stop;
                if (&stop != &route.back()) cout << " -> ";
            }
            cout << endl;
        }
    }

    if (!found) {
        cout << "No route matches your query!" << endl;
    }

    return 0;
}
