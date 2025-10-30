#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        string s;
        cin >> s;

        string temp = s;
        for (int i = 0; i < 3; i++)
            temp[i] = tolower(temp[i]);
/// temp[i]=toupper(temp[i])
       
        if (temp == "yes")/// (temp=="YES")
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
