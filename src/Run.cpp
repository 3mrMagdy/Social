#include <bits/stdc++.h>
#include "Run.h"
#include "User.h"
#include <fstream>
using namespace std;

Run::Run() {
	Main_page();
}

void Run::Main_page(){
	cout << "**Enter the number of your choice\nChoose one of the following:"
			"\n1.Sign in\n2.Sign up\n3.Exit\n";
	cin >> choice;
	system("cls");
	switch (choice){
		case 1:
			Sign_in();
			break;
		case 2:
			Sign_up();
			break;
		case 3:
			return ;//exit(0); I don't know what is the best
		default:
			cout << "You entered an invalid number please enter a valid one\n\n";
	}
	Main_page();
}

void Run::Sign_in(){
	cin.ignore();
	cout << "Enter User Name : ";
	getline(cin,user_name);
	cout << "Enter Password : ";
	getline(cin,password);
	system("cls");
	if((index=Check(0))!=-1)
		Menu_page();
	cout << "You enter an invalid user name or password\n";
}

void Run::Sign_up(){
	if(users.size()>100)
		cout << "Sorry you can't Sign Up for this application\n";
	else {
		User user;
		user.Fill_profile();
		users.push_back(user);
		index=users.size()-1;
		Menu_page();
	}
}

int Run::Check(unsigned int cnt){
	if(cnt==users.size())
		return -1;
	if(users[cnt].n_p(user_name,password))
		return cnt;
	return Check(cnt+1);
}

void Run::Menu_page(){
	cout << "**Enter the desired feature:\n1.View profile\n2.Search Friend\n3.Add post\n4.View posts"
			"\n5.View Friends\n6.Sign out\n";
	cin >> choice;
	system("cls");
	switch (choice){
		case 1:
			users[index].View_profile(0);
			break;
		case 2:
			cout << "Please enter the name of the friend you want to search for\n";
			cin.ignore();
			getline(cin,user_name);
			system("cls");
			password="-1";
			if ((Findex=Check(0))!=-1)
				try{
					users[index].Search_friend(user_name);//catch
				}catch (...){
					Friend_page();
				}
			else
				cout << "Not found such a user\n";
			break;
		case 3:
			users[index].Add_post();
			break;
		case 4:
			users[index].View_posts(0);
			break;
		case 5:
			users[index].View_friends(0);
			break;
		case 6:
			return ;
		default:
			cout << "You entered an invalid number please enter a valid one\n\n";
	}
	Menu_page();
}

void Run::Friend_page(){
	cout << "**Enter the desired feature:\n1.View Friend Profile\n2.View Friend Posts\n"
			"3.Go to Menu Page\n";
	cin >> choice;
	system("cls");
	switch (choice){
		case 1:
			users[Findex].View_profile(7);
			break;
		case 2:
			users[Findex].View_posts(0);
			break;
		case 3:
			return;
		default:
			cout << "You entered an invalid number please enter a valid one\n\n";
			Friend_page();
	}
}

Run::~Run() {

}
