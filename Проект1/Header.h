#pragma once
#include<iostream>
#include<string>
using namespace std;


struct Zapysnyk {
	string title;     //���������
	string description; // ����
	string time;
	string weekday;
	string event_date;
	string month;
	string �ategory;
	int level;

};
void Add_Event();
void ListEvents();
void Search_category();