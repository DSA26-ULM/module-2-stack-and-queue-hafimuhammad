1	#include <iostream>
2	#include <string>
3	#include "stack.h"
4	using namespace std;
5	
6	int main(){
7	Stack s;
8	init(&s);
9
10	string inputData[MAX];
11	int n;
12	if (!(cin >> n)) return 0;
13	
14	for (int i = 0; i < n && i < MAX; i++) {
15	cin >> inputData[i];
16	}
17	int hasil = HasilOperasi(&s, n, inputData);
18	cout << hasil << endl;
19	return 0;
20	}
