# include <iostream>//Игра "Кости"
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, f, g, c=3;
	srand(time(NULL));
	while (c != 0)
	{
		cout << "Введите 1, чтобы играть, или введите 0, чтобы выйти из игры." << endl;
		cin >> c;
		switch (int(c))
		{
		case 1:
			cout << "Ваш бросок" << endl;
			a = 1 + (std::rand() % 6);
			switch (int(a))
			{
			case 1:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "|       |" << endl;
				cout << "|   o   |" << endl;
				cout << "|       |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 2:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 3:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "|   o   |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 4:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 5:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|   o   |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 6:
				cout << "---------" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "---------" << endl;
				break;
			}
			b = 1 + (std::rand() % 6);
			switch (int(b))
			{
			case 1:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "|       |" << endl;
				cout << "|   o   |" << endl;
				cout << "|       |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 2:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 3:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "|   o   |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 4:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 5:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|   o   |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 6:
				cout << "---------" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "---------" << endl;
				break;
			}

			cout << "Бросок компьютера" << endl;
			f = 1 + (std::rand() % 6);
			switch (int(f))
			{
			case 1:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "|       |" << endl;
				cout << "|   o   |" << endl;
				cout << "|       |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 2:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 3:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "|   o   |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 4:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 5:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|   o   |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 6:
				cout << "---------" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "---------" << endl;
				break;
			}
			g = 1 + (std::rand() % 6);
			switch (int(g))
			{
			case 1:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "|       |" << endl;
				cout << "|   o   |" << endl;
				cout << "|       |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 2:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 3:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "|   o   |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 4:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 5:
				cout << "---------" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|   o   |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "---------" << endl;
				break;
			case 6:
				cout << "---------" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "|       |" << endl;
				cout << "| o   o |" << endl;
				cout << "---------" << endl;
				break;
			}
			cout << endl;
			if (a + b > f + g)
			{
				cout << "Вы победили!" << endl;
			}
			else if (a + b == f + g)
			{
				cout << "Ничья!" << endl;
			}
			else
			{
				cout << "Победил компьютер!" << endl;
				cout << endl;
			}
			break;
		case 0:
			cout << "Конец игры" << endl;
			break;
		}
	}
	return 0;
}