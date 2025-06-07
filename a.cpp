#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;  

    while (T--) {
        int N;
        cin >> N; 

        int maxHeight = 0;
        for (int i = 0; i < N; ++i) {
            int h;
            cin >> h;
            if (h > maxHeight)
                maxHeight = h;
        }

        cout << maxHeight << endl;  
    }

    return 0;
}
