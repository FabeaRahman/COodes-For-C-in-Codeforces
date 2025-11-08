#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
    string S;
    getline(cin, S);  

    int count = 0;
    bool Word = false;

    for (int i = 0; i < S.size(); i++) {
        char c = S[i];

        
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            if (!Word) {
                count++;    
                Word = true;
            }
        } else {
            Word = false;   
        }
    }

    cout << count << endl;

    return 0;
}
