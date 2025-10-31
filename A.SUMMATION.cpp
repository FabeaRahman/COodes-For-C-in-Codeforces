#include <bits/stdc++.h>
using namespace std;
 
int main (){
    int i;
    long long N,sum=0;
    cin>>N;
    int arr[N];
    for(i=0; i<N; i++)
    {
        cin>>arr[i];
 
        }
        for(i=0; i<N; i++)
        {
            sum=sum +arr[i];
            
        }
        if(sum<(-1))
            {
            sum=sum*(-1);
            }
        cout<< sum;
    
    
return 0;
}
