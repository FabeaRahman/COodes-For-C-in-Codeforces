#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 
    string target = "codeforces"; 

    while (t--) {
        char s;
        cin >> s; 

        bool found = false;
         for (int i = 0; i < target.size(); i++) {
            if (target[i] == s) {
                found = true;
                break;
            }
        }

        if (found)
            cout << "YES\n";
        else
            cout << "NO\n";
    }      
    return 0;
}
