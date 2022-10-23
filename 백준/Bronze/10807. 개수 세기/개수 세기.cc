#include <iostream>

using namespace std;

int pos[100],neg[100];

int main()
{
    int n,t,x;
    
    cin>>n;
    for (int i=0; i<n; i++){
        cin>>t;
        
        if(t>=0){
            pos[t]++;
        }
        else if(t<0){
            neg[-t]++;
        }
    }
    cin>>x;
    
    if(x>=0) cout<<pos[x];
    else if(x<0) cout<<neg[-x];
    
    return 0;
}