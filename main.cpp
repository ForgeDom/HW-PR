#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleOutputCP(1251);
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "Продам цуценят." << endl << "Порода: ротвейлер." << endl << "……" << endl << "Тел.: 222-22-22" << endl;
	cout << "222      |   ";
	SetConsoleTextAttribute(hConsole, 0x0E);
	cout << "222   ";
	SetConsoleTextAttribute(hConsole, 0x0F);
	cout << "|" << endl << "22       |   ";
	SetConsoleTextAttribute(hConsole, 0x0E);
	cout << "22    ";
	SetConsoleTextAttribute(hConsole, 0x0F);
	cout << "|" << endl << "22       |   ";
	SetConsoleTextAttribute(hConsole, 0x0E);
	cout << "22    ";
	SetConsoleTextAttribute(hConsole, 0x0F);
	cout << "|" << endl << "і т.д." << endl;
	return 0;
}