#include <iostream>//рандом
#include <clocale>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int mas[20]; // зачем массив нужен??? 
	int a = 4096, c = 150889, m = 714025;
	mas[0] = 1;
	cout << mas[0] << "=:1" << endl;
	for (int i = 1; i<20; i++) { // Почему только 20???
		mas[i] = (a*mas[i - 1] + c) % m;
		cout << mas[i] << "=:" << i + 1 << endl;
	}
	return 0;
}
