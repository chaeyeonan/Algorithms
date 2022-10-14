#include <iostream>
#include <algorithm>
#include <vector> 

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
  
    int a[7],sum=0;
    vector<int> b;
    
    //입력
    for(int i=0;i<7;i++){
        cin>>a[i];
    }
    
    //홀수 벡터에 삽입
    for(int i=0;i<7;i++){
        if(a[i]%2!=0){
            b.push_back(a[i]);
        }
    }
    
    //홀수가 있을 경우
    if(!b.empty()){
        for(int i=0;i<b.size();i++){
            sum+=b[i];
        }
    
        //홀수 정렬
        sort(b.begin(),b.end());
    
        //출력
        cout<<sum<<"\n"<<b[0];
    }
    
    //홀수가 없을 경우
    else if(b.empty()) cout<<-1;
    
    return 0;
}