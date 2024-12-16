#include <iostream>
#include <ctime>
using namespace std;

int main() 
{
	int x, y;
	int result = 1 + rand() % 20;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;

	int** array = new int* [x];
	for (int i = 0; i < x; i++)
	{
		array[i] = new int[y];
	}

	for (int i = 0; i < x; ++i) {
		for (int j = 0; j < y; ++j) {
			array[i][j] = std::rand() % 100 + 1;

	

	return 0;
}