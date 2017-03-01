#include <bits/stdc++.h>
#include "Profile.h"
#include "Post.h"
using namespace std;
#ifndef USER_H_
#define USER_H_

class User {
private:
	int counter;
	Profile profile;
	Post** posts;
	vector <string> friends;
public:
	User();
	User(const User &u);
    User & operator=(const User &u);
	void Fill_profile();
	bool n_p(string,string);
	void View_profile(int);
	void Search_friend(string);
	bool Check(string,unsigned int);
	void Add_post();
	void View_posts(int);
	void View_friends(unsigned int);
	void Clear();
	template <class Apost>
	void Add_post(Apost);
	template <class Vpost>
	void View_post(Vpost);
	~User();
};

#endif
