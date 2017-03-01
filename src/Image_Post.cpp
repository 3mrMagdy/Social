#include "Image_Post.h"
#include <bits/stdc++.h>
using namespace std;
Image_Post::Image_Post():Post ()
{
    resolution="";
    size=0;
    format="";
}

Image_Post::~Image_Post()
{

}
Image_Post::Image_Post(string txt,string res,string form,double sz):Post(txt)
{
    resolution=res;
    size=sz;
    format=form;

}

void Image_Post::Set_resolution (string s)
{
    resolution=s;

}
void Image_Post::Set_size (double s)
{
    size=s;
}
void Image_Post::Set_format (string s)
{
    format=s;
}
string Image_Post:: Get_resolution() const
{
    return  resolution;
}
double Image_Post:: Get_size() const
{
    return  size;

}
string Image_Post:: Get_format() const
{
    return format;

}

void Image_Post::Show_Post()
{
    cout<<"Image Link : "<<text<<endl;
    cout<<"Image Resolution: "<<resolution<<endl;
    cout<<"Image Size: "<<size<<endl;
    cout<<"Image Format : "<<format<<endl;
    Show_shares();
    Show_likes();
    Show_comments();
    Show_feelings();
    Show_tags();

}
void Image_Post:: Add_Post()
{
    string s;
    double x;
    cout<<"Enter Image size : \n";
    cin>>x;
    size=x;
    cout<<"Enter Image format : \n";
    cin.ignore();
    getline(cin,s);
    format=s;
    cout<<"Enter Image resolution : \n";
    getline(cin,s);
    resolution=s;
    cout << "Enter Image link : \n";
    getline(cin,s);
    text=s;
}





