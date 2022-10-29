#include <iostream>
#include <stack>

using namespace std;


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    stack<int> ex;

    int n;
    string cmd;
    cin >> n;

    while (n--) {
        cin >> cmd;

        if (cmd == "push") {
            int x;
            cin >> x;
            ex.push(x);
        }
        else if (cmd == "pop") {
            if (!ex.empty()) {
                cout << ex.top() << "\n";
                ex.pop();
            }
            else cout << "-1\n";
        }
        else if (cmd == "size") {
            cout << ex.size() << "\n";
        }
        else if (cmd == "empty") {
            if (ex.empty()) cout << "1\n";
            else cout << "0\n";
        }
        else {
            if (!ex.empty())  cout << ex.top() << "\n";
            else cout << "-1\n";
        }
    }


}