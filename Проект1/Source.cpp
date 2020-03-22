#include "Header.h"
#include<iostream>
#include<ctime>
#include<string>
#include<Windows.h>
#include<list>


using namespace std;


int main() {
	int action = 0;

	do {
		cout << "\t\t\tPlaner: \n\n";
		cout << "\tSelect the action: " << endl;
		cout << " 1. Show upcoming events" << endl;
		cout << " 2. View events by category" << endl;
		cout << " 3. Add an event" << endl;
		cout << " 4. Exit" << endl;
		cin >> action;
		switch (action) {
		case 1: {
			ListEvents();
		}break;
		case 2: {
			Search_category();
		}break;
		case 3: {
			Add_Event();
		}break;
		case 4: {
			break;
		}
		}
	} while (action!=4);
	system("pause");
	return 0;
}