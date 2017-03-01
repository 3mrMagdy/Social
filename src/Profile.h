#ifndef PROFILE_H
#define PROFILE_H
#include <iostream>
using namespace std;
class Profile
{
    private:
        string Name;
        string Email;
        string Password;
        string Address;
        string Birthday;
        string Education;
        string Job;
        string Phone_No;
    public:
        Profile();
        Profile(string a,string b,string c,string d,string e,string f,string g,string h);
        Profile (const Profile &p);
        Profile & operator =(const Profile &s);
        void setname(const string a);
        string getname()const;
        void setemail(const string b);
        string getemail()const;
        void setpassword(const string c);
        string getpassword()const;
        void setaddress(const string d);
        string getaddress()const;
        void setbirthday(const string e);
        string getbirthday()const;
        void seteducation (const string f);
        string geteducation ()const;
        void setjob (const string g);
        string getjob()const;
        void setphone_no(const string h);
        string getphone_no()const;
        bool Check ()const;
        void Edit_profile();
        friend istream & operator >>(istream &in ,Profile &p);
        friend ostream & operator <<(ostream &out, const Profile &p);
        ~Profile();

};

#endif
