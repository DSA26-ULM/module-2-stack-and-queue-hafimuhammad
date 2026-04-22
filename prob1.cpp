#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

#define MAX 100005

struct Stack {
    long long data[MAX];
    int top = -1;
};

void init(Stack* s) { s->top = -1; }
bool isEmpty(const Stack* s) { return s->top == -1; }
bool isFull(const Stack* s) { return s->top == MAX - 1; }
void push(Stack* s, long long value) {
    if (isFull(s)) throw overflow_error("Stack penuh!");
    s->data[++s->top] = value;
}
void pop(Stack* s) {
    if (isEmpty(s)) throw underflow_error("Stack kosong!");
    s->top--;
}
long long peek(const Stack* s) {
    if (isEmpty(s)) throw underflow_error("Stack kosong!");
    return s->data[s->top];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    static Stack st;
    init(&st);
    for (int i = 0; i < n; i++) {
        string token;
        cin >> token;
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            long long b = peek(&st); pop(&st);
            long long a = peek(&st); pop(&st);
            if (token == "+") push(&st, a + b);
            else if (token == "-") push(&st, a - b);
            else if (token == "*") push(&st, a * b);
            else push(&st, (b != 0) ? a / b : 0);
        } else {
            push(&st, stoll(token));
        }
    }
    cout << peek(&st) << endl;
    return 0;
}