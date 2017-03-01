#include "Status.h"
#include <bits/stdc++.h>
Status::Status():Post()
{

}

Status::~Status()
{

}
void Status:: Show_Post()
{
    cout<<text<<endl;
}
void Status:: Add_Post()
{
    string s;
    cout<<"Enter Status : ";
    cin.ignore();
    getline(cin,s);
    text=s;
}

