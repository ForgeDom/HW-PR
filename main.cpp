#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 0x01);
	cout << "Every" << endl;
	SetConsoleTextAttribute(hConsole, 0x02);
	cout << "\thunter" << endl;
	SetConsoleTextAttribute(hConsole, 0x03);
	cout << "\t\twants " << endl;
	SetConsoleTextAttribute(hConsole, 0x04);
	cout << "\t\t\tto " << endl;
	SetConsoleTextAttribute(hConsole, 0x05);
	cout << "\t\t\t\tknow" << endl;
	SetConsoleTextAttribute(hConsole, 0x06);
	cout << "\t\t\t\t\twhere " << endl;
	SetConsoleTextAttribute(hConsole, 0x07);
	cout << "\t\t\t\t\t\tthe" << endl;
	SetConsoleTextAttribute(hConsole, 0x08);
	cout << "\t\t\t\t\t\t\tpheasant " << endl;
	SetConsoleTextAttribute(hConsole, 0x09);
	cout << "\t\t\t\t\t\t\t\tis." << endl;
	SetConsoleTextAttribute(hConsole, 0x0F);
	return 0;
}