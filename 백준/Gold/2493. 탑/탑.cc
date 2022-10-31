#include <iostream>
#include <stack>
#define X first
#define Y second

using namespace std;

int N;
stack<pair<int,int>> st;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
  
    cin>>N;
    
    st.push({100000001,0});
    
    for (int i = 1; i <= N; i++) {
        int height;
        cin >> height;
        
        while (st.top().X < height) {
            st.pop();
        }
        
        cout << st.top().Y << " ";
        st.push({height, i});      
    }
}