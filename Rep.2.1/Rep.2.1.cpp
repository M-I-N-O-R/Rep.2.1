#include <iostream>
using namespace std;

int main()
{
	setlocale(0, ".1251");
	int N;
	int sum_even = 0;
	int sum_odd = 0;
	int total_sum = 0;

	cout << " Введiть число N: ";
	cin >> N;

	cout << " Всi парнi числа вiд 1 до " << N << " : ";
	for (int i = 1; i <= N; i++)
	{
		total_sum += i;

		if (i % 2 == 0)
		{
			cout << i << " ";
			sum_even += 1;
		}
		else {
			sum_odd += 1;
		}
	}

	cout << endl;
	cout << "Сума парних чисел:" << sum_even << endl;
	cout << "Сума непарних чисел:" << sum_odd << endl;
	cout << "Загальна сума всiх чисел:" << total_sum << endl;

	double result = (sum_even + sum_odd + total_sum) / 2.0;
	cout << " Результат всiх сум дiлених на 2: "<< result << endl;

	return 0;
}