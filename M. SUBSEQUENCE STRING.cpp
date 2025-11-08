#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string S;
    cin >> S;

    string target = "hello";
    int j = 0;  // pointer for target

    // Loop through each character in S
    for (int i = 0; i < S.size(); i++) {
        if (S[i] == target[j]) {
            j++;
        }
        // If we matched all characters of "hello"
        if (j == target.size()) {
            cout << "YES\n";
            return 0;
        }
    }

    // If loop ends without full match
    cout << "NO\n";
    return 0;
}
