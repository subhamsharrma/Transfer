#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n; // Number of elements
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Input elements
    }

    sort(arr.begin(), arr.end()); // Sort the array

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Output sorted elements
    }
    cout << endl;

    return 0;
}