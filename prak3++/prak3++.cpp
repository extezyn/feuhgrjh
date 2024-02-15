#include <iostream>

int main()
{
	setlocale(LC_ALL, "RUS");
	int arr[3][5];
	double sum = 0;
	for (int i = 0; i < 3; i++) {
		for (int j=0; j<5; j++)
		std::cin >> arr[i][j];
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			sum += arr[i][j];
		}
		std::cout << sum/5<<" ";
		sum = 0;
	}
}

