#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
  
    long long height, ans=0;
    int n;
    stack<int> st;
    
    cin>>n;
    
    while(n--){
        cin>>height;
        
        while(!st.empty() && st.top()<=height) st.pop();
        ans+=st.size();
        
        st.push(height);
    }
    
    cout<<ans;
}