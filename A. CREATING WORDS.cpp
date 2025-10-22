#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;  
 
    while (t--) {
       string a, b;
        cin >> a >> b;  

        // the first letter fo both string have to change their place means index
        
        char temp = a[0];         // the 1st index of a saved in temp
        a[0] = b[0];          // replace both indexs place
        b[0] = temp;

        cout << a << " " << b << endl;
    }

    return 0;
}
