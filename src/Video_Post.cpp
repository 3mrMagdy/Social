#include "Video_Post.h"
#include <bits/stdc++.h>
using namespace std;
Video_Post::Video_Post():Post()
{
    resolution="";
    size=0;
    format="";
    NumberOfFPS=0;
    aspectRatio="";
    duration=0;
}

Video_Post::~Video_Post()
{

}

Video_Post::Video_Post(string txt,string res,string form,double sz,string ap,double dr,double fps):Post (txt)
{
    resolution=res;
    size=sz;
    format=form;
    NumberOfFPS=fps;
    aspectRatio=ap;
    duration=dr;
}

void Video_Post::Set_resolution (string s)
{
    resolution=s;
}
void Video_Post::Set_NumberOfFPS (double s)
{
    NumberOfFPS=s;

}
void Video_Post:: Set_size (double s)
{
    size=s;
}
void Video_Post:: Set_aspectRatio (string s)
{
    aspectRatio=s;

}
void Video_Post::Set_format (string s)
{
    format=s;
}
void Video_Post::Set_duration(double s)
{
    duration=s;
}
string Video_Post:: Get_resolution() const
{
    return resolution ;
}
double Video_Post::Get_NumberOfFPS() const
{
    return NumberOfFPS ;

}
string Video_Post::Get_format() const
{
    return format ;
}
double Video_Post::Get_size() const
{
    return size ;

}
string Video_Post::Get_aspectRatio() const
{
    return aspectRatio ;
}
double Video_Post::Get_duration() const
{
    return duration;
}
void Video_Post:: Show_Post()
{
    cout<<"Video Link : "<<text<<endl;
    cout<<"Video Resolution: "<<resolution<<endl;
    cout<<"Video Aspect Ratio : "<<aspectRatio<<endl;
    cout<<"Video Number of Frames Per Second: "<<NumberOfFPS<<endl;
    cout<<"Video Size : "<<size<<endl;
    cout<<"Video Format : "<<format<<endl;
    Show_shares();
    Show_likes();
    Show_comments();
    Show_feelings();
    Show_tags();
}
void Video_Post:: Add_Post()
{
    string s;
    double x;
    cout<<"Enter video Number of FPS : \n";
    cin>>x;
    NumberOfFPS=x;
    cout<<"Enter video aspect ratio: \n";
    cin.ignore();
    getline(cin,s);
    aspectRatio=s;
    cout<<"Enter video duration : \n";
    cin>>x;
    duration=x;
    cout<<"Enter video size : \n";
    cin>>x;
    size=x;
    cout<<"Enter video format : \n";
    cin.ignore();
    getline(cin,s);
    format=s;
    cout<<"Enter video resolution : \n";
    getline(cin,s);
    resolution=s;
    cout << "Enter Video link : \n";
    getline(cin,s);
    text=s;
}

