#include <bits/stdc++.h>
using namespace std;
int main ()
{
int N;
cin>>N;
bool any =false;
for(int i=1; i<=N ;i++){
    if (i%2==0){
    cout<<i<<" "<<endl;
   any=true;
    }
}
 if(!any)
    cout<< "-1";
    return 0;
}