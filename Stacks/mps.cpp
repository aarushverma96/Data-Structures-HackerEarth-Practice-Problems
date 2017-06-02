#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    int n, Q, target, sum = 0;
    queue<int> harrys;
    stack<int> monks;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        harrys.push(num);
    }
    cin >> Q >> target;
    int res = -1;
    if (sum == target) {
        res = 0;
    } else {
        for (int q = 0; q < Q; q++) {
            string op;
            cin >> op;
            if (op == "Harry") {
                int num = harrys.front();
                harrys.pop();
                monks.push(num);
                sum += num;
            } else {
                int num = monks.top();
                monks.pop();
                sum -= num;
            }
            if (sum == target) {
                res = monks.size();
                break;
            }
        }
    }
    cout << res << endl;
    return 0;
}