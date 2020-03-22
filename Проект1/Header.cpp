#include "Header.h"
#include<Windows.h>
#include<list>
#include<string>
using namespace std;

#define SLEEP Sleep(1000);
list<Zapysnyk>Event_list;
HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

void Add_Event()
{
	Zapysnyk newEvent;
	cout << "Enter title for new event: " << endl;
	cin.ignore();
	getline(cin, newEvent.title);
	cout << "Add a description to a new event: " << endl;
	cin.ignore();
	getline(cin, newEvent.description);
	cout << "Enter time for new event: " << endl;
	cin.ignore();
	getline(cin, newEvent.time);
	cout << "Enter weekday for new event: " << endl;
	cin.ignore();
	getline(cin, newEvent.weekday);
	cout << "Enter date for new event: " << endl;
	cin.ignore();
	getline(cin, newEvent.event_date);
	cout << "Enter month for new event: " << endl;
	cin.ignore();
	getline(cin, newEvent.month);
	cout << "Enter category for new event: " << endl;
	cout << "(teaching, sport, work, hobby, children, dog)" << endl;
	cin>>newEvent.ñategory;
	cout << "Enter level of importance for new event: " << endl;
	cout << "1 - important; 2 - more important; 3 - the most important." << endl;
	cin>>newEvent.level;

	Event_list.push_back(newEvent);
}
void ListEvents()
{
	for (Zapysnyk item : Event_list) {
		SLEEP
			cout << endl;
		if (item.level==1) {
			SetConsoleTextAttribute(color, FOREGROUND_GREEN);
			cout << item.title << endl;
			cout << item.description << endl;
			cout << item.time << endl;
			cout << item.weekday << " ";
			cout << item.event_date << " ";
			cout << item.month << " ";
			cout << item.ñategory << endl;
			cout << item.level << endl;
			SetConsoleTextAttribute(color, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
		}
		else if (item.level == 2) {
			SetConsoleTextAttribute(color, FOREGROUND_BLUE);
			cout << item.title << endl;
			cout << item.description << endl;
			cout << item.time << endl;
			cout << item.weekday << " ";
			cout << item.event_date << " ";
			cout << item.month << " ";
			cout << item.ñategory << endl;
			cout << item.level << endl;
			SetConsoleTextAttribute(color, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN);
		}
		else if (item.level == 3) {
			SetConsoleTextAttribute(color, FOREGROUND_RED);
			cout << item.title << endl;
			cout << item.description << endl;
			cout << item.time << endl;
			cout << item.weekday << " ";
			cout << item.event_date << " ";
			cout << item.month << " ";
			cout << item.ñategory << endl;
			cout << item.level << endl;
			SetConsoleTextAttribute(color, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
		}
	}
}
void Search_category()
{
	string category;
	cout << "Select category for search: " << endl;
	cout << "teaching,\nsport,\nwork,\nhobby,\nchildren,\ndog" << endl;
	cin >> category;
	for (Zapysnyk item : Event_list) {
		if (item.ñategory==category&&item.level==1) {
			SetConsoleTextAttribute(color, FOREGROUND_GREEN);
			cout << item.title << endl;
			cout << item.description << endl;
			cout << item.time << endl;
			cout << item.weekday << " ";
			cout << item.event_date << " ";
			cout << item.month << " ";
			cout << item.ñategory << endl;
			cout << item.level << endl;
			SetConsoleTextAttribute(color, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
		}
		else if (item.ñategory == category&&item.level == 2) {
			SetConsoleTextAttribute(color, FOREGROUND_BLUE);
			cout << item.title << endl;
			cout << item.description << endl;
			cout << item.time << endl;
			cout << item.weekday << " ";
			cout << item.event_date << " ";
			cout << item.month << " ";
			cout << item.ñategory << endl;
			cout << item.level << endl;
			SetConsoleTextAttribute(color, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
		}
		else if (item.ñategory == category&&item.level == 3) {
			SetConsoleTextAttribute(color, FOREGROUND_RED);
			cout << item.title << endl;
			cout << item.description << endl;
			cout << item.time << endl;
			cout << item.weekday << " ";
			cout << item.event_date << " ";
			cout << item.month << " ";
			cout << item.ñategory << endl;
			cout << item.level << endl;
			SetConsoleTextAttribute(color, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
		}
	}
}

