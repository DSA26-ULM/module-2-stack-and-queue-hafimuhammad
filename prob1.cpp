#include <iostream>
#include <string>
#include "stack.h"

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    Stack st;
    init(&st);

    for (int i = 0; i < n; i++) {
        string token;
        cin >> token;

        if (token == "+" || token == "-" || token == "*" || token == "/") {
            
            int b = peek(&st); 
            // Ambil operand kedua lalu pertama (PENTING: urutan b lalu a)
            long long b = peek(&st); 
            pop(&st);
            int a = peek(&st); 
            long long a = peek(&st); 
            pop(&st);

            int result;
            long long result;
            if (token == "+") result = a + b;
            else if (token == "-") result = a - b;
            else if (token == "*") result = a * b;
            else result = a / b;
            else result = (b != 0) ? a / b : 0; // Hindari division by zero

            push(&st, result);
        } else {
            push(&st, stoi(token));
            push(&st, stoll(token)); // Menggunakan stoll untuk angka besar
        }
    }

    cout << peek(&st) << endl;

    return 0;
}