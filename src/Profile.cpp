#include "Profile.h"
#include <bits/stdc++.h>
using namespace std;
Profile::Profile(){

}

Profile::Profile(string a,string b, string c,string d,string e,string f,string g,string h){
    Name=a;
    Email=b;
    Password=c;
    Address=d;
    Birthday=e;
    Education=f;
    Job=g;
    Phone_No=h;
}

Profile::Profile  (const Profile &p){
    Name= p.Name;
    Email= p.Email;
    Password= p.Password;
    Address= p.Address;
    Birthday= p.Birthday;
    Education= p.Education;
    Job= p.Job;
    Phone_No= p.Phone_No;
}

Profile & Profile:: operator =(const Profile &s)
{
    Name= s.Name;
    Email= s.Email;
    Password= s.Password;
    Address= s.Address;
    Birthday= s.Birthday;
    Education= s.Education;
    Job= s.Job;
    Phone_No= s.Phone_No;
    return (*this);
}

void Profile::setname(const string a){
    Name=a;
}

string Profile::getname()const{
    return Name;
}

void Profile::setemail(const string b){
    Email=b;
}

string Profile::getemail()const{
    return Email;
}

void Profile::setpassword(const string c){
    Password=c;
}

string Profile::getpassword()const{
    return Password;
}

void Profile::setaddress(const string d){
    Address=d;
}

string Profile::getaddress()const{
    return Address;
}

void Profile::setbirthday(const string e){
    Birthday=e;
}

string Profile::getbirthday()const{
    return Birthday;
}

void Profile::seteducation (const string f){
    Education=f;
}

string Profile::geteducation ()const{
    return Education;
}

void Profile:: setjob (const string g){
    Job=g;
}

string Profile::getjob()const{
    return Job;
}
void Profile::setphone_no(const string h){
    Phone_No=h;
}

string Profile::getphone_no()const{
    return Phone_No;
}

bool Profile::Check()const{
	if(Name=="" || Email=="" || Address=="" || Birthday=="" || Education=="" || Job=="" || Phone_No=="")
		return 0;
	return 1;
}

void Profile::Edit_profile(){
	int choice;
	string s;
	cout << "**Enter the number of your choice\n1.Name\n2.Email\n3.Password\n4.Address\n"
			"5.Birthday\n6.Education\n7.Job\n8.Phone_No\n";
	cin >> choice;
	system("cls");
	cout << "Please enter the new value\n";
	cin.ignore();
	getline(cin,s);
	system("cls");
	switch (choice){
		case 1:
			setname(s);
			break;
		case 2:
			setemail(s);
			break;
		case 3:
			setpassword(s);
			break;
		case 4:
			setaddress(s);
			break;
		case 5:
			setbirthday(s);
			break;
		case 6:
			seteducation(s);
			break;
		case 7:
			setjob(s);
			break;
		case 8:
			setphone_no(s);
			break;
		default:
			cout << "You entered an invalid number please enter a valid one\n\n";
			Edit_profile();
	}
}

istream & operator >>(istream &in ,Profile &p){
	bool x=0, y=0, z=0;
	cout << "Please enter all the required info\nName : ";
	in.ignore();
    getline(in,p.Name);
	system("cls");
    cout << "\nEmail : ";
    getline(in,p.Email);
	system("cls");
    cout << "\nPassword (must equal 8 chars) : ";
    while (!(x&&y&&z) || p.Password.size()!=8){
    	getline(in,p.Password);
    	system("cls");
    	for(unsigned int i=0 ; i<p.Password.size() ; i++){
    		x|=(p.Password[i]>='A' && p.Password[i]<='Z');
    		y|=(p.Password[i]>='a' && p.Password[i]<='z');
    		z|=(p.Password[i]>='1' && p.Password[i]<='9');
    	}
    	if(!(x&&y&&z))
    		cout << "The password must contain at least one upper-case,"
    				" one lower-case, and one number.\n";
    	if (p.Password.size()!=8)
    		cout << "The password must equal to 8 chars\n";
    }
    cout  << "\nAddress : ";
    getline(in,p.Address);
	system("cls");
    cout << "\nBirthday : ";
    getline(in,p.Birthday);
	system("cls");
    cout << "\nEducation : ";
    getline(in,p.Education);
	system("cls");
    cout << "\nJob : ";
    getline(in,p.Job);
	system("cls");
    cout << "\nPhone_No. : ";
    cin >> p.Phone_No;
	system("cls");
    return in;
}

ostream & operator <<(ostream &out, const Profile &p){
    out<< "Name : " << p.Name << "\nEmail : " << p.Email << "\nPassword : " << p.Password
       << "\nAddress : " << p.Address << "\nBirthday : " << p.Birthday << "\nEducation : "
       << p.Education << "\nJob : " << p.Job << "\nPhone_No. : " << p.Phone_No << '\n';
    return out;
}

Profile::~Profile(){

}
