#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        string target = "Timur";

       
        if (n != 5) {
            cout << "NO\n";
            continue;
        }

        string temp = s;

        sort(temp.begin(), temp.end());
        sort(target.begin(), target.end());

        if (temp == target)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
