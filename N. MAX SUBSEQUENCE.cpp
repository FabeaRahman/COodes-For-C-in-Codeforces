#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    
    int N;
    string S;
    cin >> N >> S;

    int count = 1;/// 1st ltr

    for (int i = 1; i < N; i++) {
        if (S[i] != S[i - 1]) {
            count++;
        }
    }

    cout << count << "\n";
    return 0;
}
