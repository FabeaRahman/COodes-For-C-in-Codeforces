#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin >> N;           
    int A[N];
 
    for (int i = 0; i < N; i++) {
        cin >> A[i];    
    }
 
    int minVal = A[0];
    for (int i = 1; i < N; i++) {
        if (A[i] < minVal)
            minVal = A[i];
    }
    
    
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] == minVal)
            count++;
    }
    
    if (count % 2 != 0)
        cout << "Lucky" << endl;
    else
        cout << "Unlucky" << endl;
    
    return 0;
}