#include "queue.h"
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

    Queue q;
    init(&q);

    int jumlah = 0;
    for (int i = 0; i < k; i++) {
        enqueue(&q, arr[i]);
        jumlah += arr[i];
    }

    bool pertama = true;

    if (!pertama) cout << " ";
    cout << jumlah;
    pertama = false;

    for (int i = k; i < n; i++) {
        
        jumlah -= front(&q);
        dequeue(&q);

        enqueue(&q, arr[i]);
        jumlah += arr[i];

        cout << " " << jumlah;
    }

    cout << endl;

