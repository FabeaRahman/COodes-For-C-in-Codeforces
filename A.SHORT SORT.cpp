#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;   

    while (t--) {
        string s;
        cin >> s;       
        string target = "abc"; 

       
        if (s == target) {
            cout << "YES\n";
            continue;
        }

        bool possible = false;

        for (int i = 0; i < 3; i++) {
            for (int j = i + 1; j < 3; j++) {
                string temp = s;
                swap(temp[i], temp[j]);   
                if (temp == target) {     
                    possible = true;
                    break;
                }
            }
            if (possible) break;
        }

        
        if (possible)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
