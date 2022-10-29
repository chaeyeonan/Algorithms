#include <iostream>
#include <stack>

using namespace std;


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k, m, sum = 0;
    stack<int> st;

    //입력
    cin >> k;

    while (k--) {
        cin >> m;

        if (m == 0) st.pop(); // 0이면 최근 수 삭제
        else st.push(m); 

    }

    //스택에 남아있는 수 합 구하기
   while (!st.empty()) {
       sum += st.top();
       st.pop();
   }

   cout << sum;

}