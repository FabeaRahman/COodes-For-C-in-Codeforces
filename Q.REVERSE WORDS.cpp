#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    getline(cin, S); 

    string word = "";
    for (int i = 0; i < S.size(); i++) {
        if (S[i] == ' ') {
            reverse(word.begin(), word.end());
            cout << word << " ";
            word = "";
        } else {
            word += S[i];
        }
    }

    
    reverse(word.begin(), word.end());
    cout << word << endl;

    return 0;
}
