#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int jumlah = 0;
    for (int i = 0; i < k; i++) {
        jumlah += arr[i];
    }

    cout << jumlah;

    for (int i = k; i < n; i++) {
        cout << " " << jumlah;
    }

    cout << endl;
    return 0;
