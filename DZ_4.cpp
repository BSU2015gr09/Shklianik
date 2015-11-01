#include <iostream>/*генерации псевдослучайных чисел*/
using namespace std;
void xorshift(int &x) {
	x = 10;
	int tmp;
	tmp ^= (x << 21);
	tmp ^= (tmp >> 34);
	x ^= (tmp << 4);
	cout << x << "\n";
	
}
int main() {
	int x;
	xorshift(x);
	
}