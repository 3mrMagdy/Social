#include <bits/stdc++.h>
#include "User.h"
using namespace std;
#ifndef RUN_H_
#define RUN_H_

class Run {
private:
	vector <User> users;
	string user_name, password;
	int index, choice, Findex;
public:
	Run();
	void Sign_in ();
	void Sign_up ();
	int Check(unsigned int);
	void Main_page();
	void Menu_page();
	void Friend_page();
	~Run();
};

#endif
