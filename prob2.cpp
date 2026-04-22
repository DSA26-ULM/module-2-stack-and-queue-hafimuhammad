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

    // Hitung sum window pertama
    int jumlah = 0;
    for (int i = 0; i < k; i++) {
        jumlah += arr[i];
    }

    cout << jumlah;

    // Geser window satu per satu
    for (int i = k; i < n; i++) {
        jumlah -= arr[i - k]; // hapus elemen paling kiri
        jumlah += arr[i];     // tambah elemen baru kanan
        cout << " " << jumlah;
    }

    cout << endl;
    return 0;
}
