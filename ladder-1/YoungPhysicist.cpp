//basic c++ template for competitive programming

#include <iostream>     // <-- Required for cin, cout, endl
#include <vector>       
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> space(3);
    for (int i = 0; i < n; ++i) {
        int x, y, z;
        cin >> x >> y >> z;
        space[0] += x;
        space[1] += y;
        space[2] += z;
    }
    for (auto y : space) {
        if (y != 0) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
