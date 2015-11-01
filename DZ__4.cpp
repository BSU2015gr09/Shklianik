#include <iostream> //слева-направо и справа-налево эллементы массива
 using namespace std;
int main()
 {
	const int N = 10;
	int mas[N][N];
	int a = 1; 
		cout << "Right" << endl;
	for (int wod = 0; wod < N; wod++)
		 {
		for (int fod = 0; fod < N; fod++)
			 {
			mas[wod][fod] = a;
			cout << mas[wod][fod] << "\t";
			a++;
			}
		}
	cout << "" << endl;
		cout << "Left " << endl;
	a = 1;
	for (int wod = 0; wod < N; wod++)
		 {
		for (int fod = N - 1; fod >= 0; fod--)
			 {
			mas[wod][fod] = a;
			a++;
			}
		}
	
		for (int wod = 0; wod < N;wod++)
		 {
		for (int fod = 0; fod < N; fod++)
			 {
			cout << mas[wod][fod] << "\t";
			}
		}
	
		system("pause");
	return 0;
	
		}