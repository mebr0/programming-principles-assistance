#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v;

    for (int i = 0; i < n; ++i) {
        int x; cin >> x;

        v.push_back(x);
    }

    reverse(v.begin(), v.end());

    for (auto i: v) {
        cout << i << ' ';
    }

    cout << endl;
}