#include <bits/stdc++.h>
#include "User.h"
#include "Profile.h"
#include "Post.h"
#include "Status.h"
#include "Image_Post.h"
#include "Video_Post.h"
using namespace std;

User::User() {
	counter=0;
	posts=new Post*[100];
}

User::User(const User &u){
	counter=u.counter;
	profile=u.profile;
	posts=new Post*[100];
	for(int i=0 ; i<counter ; i++)
		*posts[i]=*u.posts[i];
	for(unsigned int i=0 ; i<u.friends.size() ; i++)
		friends.push_back(u.friends[i]);
}

User & User:: operator=(const User &u){
	counter=u.counter;
	profile=u.profile;
	for(int i=0 ; i<counter ; i++)
		*posts[i]=*u.posts[i];
	for(unsigned int i=0 ; i<u.friends.size() ; i++)
		friends.push_back(u.friends[i]);
	return (*this);
}

void User::Clear(){
	char x;
	cout << "Press enter to goto Menu Page : ";
	cin.ignore();
	cin.get(x);
	system("cls");
}

void User::Fill_profile(){
	cin >> profile;
	if(!profile.Check()){
		cout << "You mustn't leave any info please retype your profile\n";
		Fill_profile();
	}
}

bool User::n_p(string s,string t){
	if(s==profile.getname() &&( t==profile.getpassword() || t=="-1"))
		return 1;
	return 0;
}

void User::View_profile(int x){
	int choice;
	cout << profile;
	if(x){
		Clear();
		return;
	}
	cout << "If you want to edit your profile enter 1 else enter any other number\n";
	cin >> choice;
	system("cls");
	if(choice==1)
		profile.Edit_profile();
}

void User::Search_friend(string s){
	if(Check(s,0))
		throw 7;
	if(friends.size()==50)
		cout << "you can't add more friends\n";
	else{
		friends.push_back(s);
		cout << "you add this user to your friends\n";
	}
}

bool User::Check(string s, unsigned int cnt){
	if(cnt==friends.size())
		return 0;
	if(s==friends[cnt])
		return 1;
	return Check(s,cnt+1);
}

/*
void User::Delete_friend(int Fnum){
	cout << Fnum;
	friends.erase(friends.begin()+Fnum,1);
	cout << "you have remove this user\n";
}
**when I call this function the program crash but when i remove the erase statement the program
**run normally i don't know but it seems like i cannot erase an element from vector declared in
**a class so i didn't make this features as it is Extra too XD;
*/

void User::Add_post(){
	int choice ;
	cout << "**Enter the type of your post :\n1.Text\n2.Image\n3.Video\n";
	cin >> choice;
	system("cls");
	switch(choice){
		case 1:
			posts[counter]=new Status ;
			posts[counter]->Add_Post();
			break;
		case 2:
			posts[counter]=new Image_Post;
			posts[counter]->Add_Post();
			break;
		case 3:
			posts[counter]=new Video_Post;
			posts[counter]->Add_Post();
			break;
		default:
			cout << "You entered an invalid number please enter a valid one\n\n";
			Add_post();
	}
	system("cls");
	cout <<"You have entered a new post\n";
	counter++;
}

void User::View_posts(int cnt){
	if(!counter)
		cout << "You have no posts\n";
	if(cnt==counter)
		return;
	View_posts(cnt+1);
	posts[cnt]->Show_Post();
	cout << "\n\n\n";
	if(!cnt)
		Clear();
}

void User::View_friends(unsigned int cnt){
	if(!friends.size())
		cout << "You have no friends\n";
	if(cnt==friends.size()){
		Clear();
		return ;
	}
	cout << friends[cnt] << '\n';
	View_friends(cnt+1);
}

template <class Apost>
void User::Add_post(Apost P){
	P.Add_Post();
}

template <class Vpost>
void User::View_post(Vpost P){
	P.Show_Post();
}

User::~User() {
	delete [] posts;
}
