### Find maximum in an Array


Certainly! Let's break down the C++ code you posted:

---

```cpp
#include <bits/stdc++.h>
using namespace std;
```

* `#include <bits/stdc++.h>` is a GCC-specific header that includes most standard C++ libraries at once. It's convenient for competitive programming.
* `using namespace std;` allows you to avoid prefixing `std::` with every standard object like `vector`, `cin`, `cout`, etc.

---

```cpp
int main() {
    int T;
    cin >> T;
```

* Reads the number of test cases `T`.

---

```cpp
    while (T--) {
        int N;
        cin >> N;
        vector<int> v;
```

* For each test case, it reads `N` (number of mountains).
* Declares a vector `v` to store the mountain heights.

---

```cpp
        for (int i = 0; i < N; i++) {
            int h;
            cin >> h;
            v.push_back(h);
        }
```

* Loops `N` times, reads each height `h`, and adds it to the vector using `push_back`.

---

```cpp
        sort(v.begin(), v.end());
```

* Sorts the vector `v` in ascending order using `std::sort`.

---

```cpp
        int s = v.size();
        cout << v[s - 1] << endl;
```

* After sorting, the last element `v[s - 1]` is the largest (tallest mountain), so it prints that.

---

```cpp
    }

    return 0;
}
```

* Ends the loop and the program.


