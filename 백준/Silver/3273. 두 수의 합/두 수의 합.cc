#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
  
    int n,sum,count=0;
    int arr[1000001]={};
    bool num[2000001]={false};
    
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>sum;
    
    for(int i=0; i<n; i++){
        if(sum-arr[i]>0 && num[sum-arr[i]] ) count++;
        num[arr[i]]=true;
    }
    
    cout<<count;
    
    return 0;
}