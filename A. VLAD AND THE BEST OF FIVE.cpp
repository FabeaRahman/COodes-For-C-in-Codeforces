#include <iostream>
#include <string>
using namespace std;

int main() {
    int t; 
    cin >> t;

    for(int i=0 ;i<t ;i++) {  // loop 
        string w;
        cin >> w;
        int len=w.size();

       int countA = 0;
        for (int i = 0; i < len; i++) {
    if (w[i] == 'A') countA++;
}


        int countB = 5 - countA; 

        if (countA > countB)
            cout << "A" << endl;
        else
            cout << "B" << endl;
    }

    return 0;
}
