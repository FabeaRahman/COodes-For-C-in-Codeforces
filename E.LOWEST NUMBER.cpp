#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin >> N;
 
    int A[1000]; 
 
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
 
    int mv = A[0];
    int pos = 1; 
 
    for (int i = 1; i < N; i++) {
        if (A[i] <mv) {
           mv = A[i];
            pos = i + 1; 
        }
    }
 
    cout << mv << " " << pos << endl;
    return 0;
}