#include <iostream>
#include <string>
using namespace std;

int main() {
    int t; 
    cin >> t;

    for(int i=0 ;i<t ;i++) {  // loop 
         ///  {while (t--)}  loop for t test cases
        string w;
        cin >> w;

        int len = w.size();

        
        if (len >= 2 && w[len - 2] == 'u' && w[len - 1] == 's') {
            
            w = w.substr(0, len - 2) + "i";
        }

        cout << w << endl;
    }

    return 0;
}
