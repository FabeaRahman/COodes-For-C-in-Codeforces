#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; //
  int a, b;
  
    while (t--) {
      
        cin >> a >> b;

        int result = b - a;  // (c - a) + (b - c) = b - a because c-c=0
        cout << result << endl;
    }

    return 0;
}
