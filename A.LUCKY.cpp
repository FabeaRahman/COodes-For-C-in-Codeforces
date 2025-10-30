#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; 
    for (int i = 0; i < n; i++) {
    string a;
    cin >> a;
int sum1 = 0, sum2 = 0;

       
        for (int i = 0; i < 3; i++)
            sum1 += a[i] - '0';

        for (int i = 3; i < 6; i++)
            sum2 += a[i] - '0';

        if (sum1 == sum2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
