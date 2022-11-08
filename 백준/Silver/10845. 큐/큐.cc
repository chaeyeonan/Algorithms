#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int SIZE = 1e4+1; // 1번 인덱스부터 값이 들어감

vector<int> queue_vec(SIZE);
int front_pointer=0,rear_pointer=0;

int main(){
    int n,x;
    string cmd;
    
    queue<int> q;
    
    //입력
    cin>>n;
    while(n--){
        cin>>cmd;
        if(cmd=="push"){
            cin>>x;
            //if(!full()){
                q.push(x);
           // }
            continue;
        }
        if(cmd=="pop"){
            if(q.empty()){
                cout<<"-1\n";
            }
            else{
                cout<<q.front()<<"\n";
                q.pop();
            }
            continue;
        }
        if(cmd=="size"){
            cout<<q.size()<<"\n";
            continue;
        }
        if(cmd=="empty"){
            cout<<q.empty()<<"\n";
            continue;
        }
        if(cmd=="front"){
            if(q.empty()){
                cout<<"-1\n";
            }
            else{
                cout<<q.front()<<"\n";
            }
            continue;
        }
        if(cmd=="back"){
            if(q.empty()){
                cout<<"-1\n";
            }
            else{
                cout<<q.back()<<"\n";
            }
        }
    }
    return 0;
}