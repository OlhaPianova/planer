#pragma once
#include<iostream>
#include<string>
using namespace std;


struct Zapysnyk {
	string title;     //заголовок
	string description; // опис
	string time;
	string weekday;
	string event_date;
	string month;
	string сategory;
	int level;

};
void Add_Event();
void ListEvents();
void Search_category();