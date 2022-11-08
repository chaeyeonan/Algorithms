#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
  
    int n;
    string cmd;
    queue<int> q;
    cin>>n;
    
    while(n--){
        cin>>cmd;
        
        if(cmd=="push"){
            int k;
            cin>>k;
            q.push(k);
        }
        else if(cmd=="pop"){
            if(!q.empty()){
                cout<<q.front()<<"\n";
                q.pop();
            }
            else cout<<"-1\n";
        }
        else if(cmd=="front"){
            if(!q.empty()) cout<<q.front()<<"\n";
            else cout<<"-1\n";
        }
        else if(cmd=="back"){
            if(!q.empty()) cout<<q.back()<<"\n";
            else cout<<"-1\n";
        }
        else if(cmd=="size"){
            cout<<q.size()<<"\n";
        }
        else if(cmd=="empty"){
            if(!q.empty()) cout<<"0\n";
            else cout<<"1\n";
        }
    }

    return 0;
}