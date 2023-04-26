#include "News.h"
#include <iostream>
#include <string>
using namespace std;
News :: News() {
	id = 0;
	rate = 0;
}
void News:: enterData() {
	cout << "Enter new title: " << endl;
	cin >> title;
	cout << "Enter new description: " << endl;
	cin >> desc;
	cout << "Enter new rate: " << endl;
	cin >> rate;
	cout << "Enter new category: " << endl;
	cin >> cat;
	cout << "Enter new date :" << endl;
	cin >> day>>month>>year;
}
