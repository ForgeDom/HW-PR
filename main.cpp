#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "To be, ";
	SetConsoleTextAttribute(hConsole, 0x0D);
	cout << "or not ";
	SetConsoleTextAttribute(hConsole, 0x0F);
	cout << "to be: that is the question:" << endl << "Wheather ";
	SetConsoleTextAttribute(hConsole, 0x0E);
	cout << "'tis nobler in the mind to suffer" << endl << "The slings and arrows of outrageous fortune," << endl << "Or to take arms against a sea of troubles," << endl << "And by opposing end them? " << endl << "William Shakespeare";
}