#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int k;
    int arr[1000001]={0},ans[1000001]={0};
    stack<int> st;
    
    //입력
    cin>>k;
    for(int i=0; i<k; i++){
        cin>>arr[i];
    }
    
    for(int i=k-1; i>=0; i--){
        while(!st.empty() && arr[i]>=st.top()) st.pop();
        
        if(st.empty()) ans[i]=-1;
        else ans[i]=st.top();
        
        st.push(arr[i]);
    }
    
    //출력
    for(int i=0; i<k; i++){
        cout<<ans[i]<<" ";
    }
}