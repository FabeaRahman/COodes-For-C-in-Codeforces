#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;

    for(int i=0 ;i<t ;i++) {  // loop 
        int a,b,c;
        cin >> a>> b>>c;
if(a < b && b < c){
    cout<<"STAIR"<<endl;
}
      else if (b > a && b > c)  
      {
        cout<<"PEAK"<<endl;
      }
else{
    cout<<"NONE"<<endl;
}
        
        
    }

    return 0;
}
