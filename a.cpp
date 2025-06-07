#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector < int > v;

        for (int i = 0; i < N; i++) {
            int h;
            cin >> h;
            v.push_back(h);
        }

        sort(v.begin(), v.end());
        int s = v.size();
        cout << v[s - 1] << endl;
    }

    return 0;
}