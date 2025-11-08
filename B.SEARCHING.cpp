#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin>>N;
  
  long long arr[N];
  for(int i=0; i<N ;i++){
      cin>>arr[i];
  }
  
  long long key;
  cin>>key;
  bool found=false;
  for(int i=0; i<N ;i++){
      
  if(arr[i] == key){
      found=true;
      cout<<i<<endl;
      return 0;
  }
  
  }
  if(!found)
   {cout<<-1<<endl;}
 
    return 0;
}
