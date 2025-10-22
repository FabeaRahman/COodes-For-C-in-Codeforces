#include <bits/stdc++.h>
using namespace std;
int main (){
    int n,last,t;
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        int sum=0;
         while (n != 0) {
            last = n % 10;
            sum += last;        
            n = n / 10;         
        }
   cout<<sum<<endl;
    }
   
    return 0;
}