#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 
    for (int i = 0; i < t; i++) {
    int a,b,c;
    cin >> a>>b >>c;
    
    if(a+b==c){
        cout<<"YES"<<endl;
 
        /*if (a == b + c || b == a + c || c == a + b)
            cout << "YES\n";
        else
            cout << "NO\n";*/
   }
   else if(a+c==b){
        cout<<"YES"<<endl;
 
   }
   else if(c+b==a){
        cout<<"YES"<<endl;
 
   }
   
   else{
    cout<<"NO"<<endl;
   }
}
   return 0;
}
    