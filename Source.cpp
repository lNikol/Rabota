#include <iostream>
#include <fstream>
#include <ctime>
#include "lib.h"
#include "lib.cpp"
using namespace std;
int main() {
	system("chcp 1251");// Подкл русск языка
	int size = 10;
	int arr[10];
	srand(time(0));
	ofstream OutFile;

	//string str1;
	OutFile.open("OutFile.txt");
	for (int i = 0; i < size; i++) {
		OutFile << rand() % 100 - 50 << " ";
	}
	OutFile.close();
	ifstream B("OutFile.txt");
	for (int q{}; q < size; q++) {
		B >> arr[q];
	};
	for (int i = 0; i < size; i++) {
		cout << arr[i] << ' ';
	};
	int index = -1;
	Mini(arr, size, index);
	cout << endl;
	cout << arr[index] << endl;
}

