#include <iostream>
using namespace std;
void fill_array(int* arr,int size) 
{
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100;
	}
}
void print_array(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}
int main()
{
	srand(time(NULL));
	setlocale(0, "ru");
	int size1 = 5;
	int* arr1 = new int[size1];

	int size2 = 5;
	int* arr2 = new int[size2];

	int size3 = 5;
	int* arr3 = new int[size3];

	fill_array(arr1, size1);
	fill_array(arr2, size2);

	cout << "Первый массив: ";
	print_array(arr1, size1);
	cout << endl;

	cout << "Второй массив: ";
	print_array(arr2, size2);
	cout << endl;

	for (int i = 0; i < size1; i++) {
		arr3[i] = arr1[i]+arr2[i];

	}
	
	cout << "Финальный массив: ";
	print_array(arr3, size3);
}
