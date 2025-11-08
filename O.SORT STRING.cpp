#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int N;
    cin >> N;

    int freq[26] = {0};
    char ch;

    // Read N characters one by one (avoids large string allocation)
    for (int i = 0; i < N; i++) {
        cin >> ch;
        freq[ch - 'a']++;
    }

    // Output sorted result
    for (int i = 0; i < 26; i++) {
        while (freq[i]--) {
            cout << char('a' + i);
        }
    }

    return 0;
}
