#ifndef VIDEO_POST_H
#define VIDEO_POST_H
#include "Post.h"
using namespace std;

class Video_Post: public Post
{
public:
    Video_Post();
    Video_Post(string,string,string,double,string,double,double);
    Video_Post(string);
    virtual ~Video_Post();
    void Set_resolution (string);
    void Set_NumberOfFPS (double);
    void Set_size (double);
    void Set_aspectRatio (string);
    void Set_format (string);
    void Set_duration(double);
    string Get_resolution() const;
    double Get_NumberOfFPS() const;
    string Get_format() const;
    double Get_size() const;
    string Get_aspectRatio() const;
    double Get_duration() const;
    virtual void Show_Post();
    virtual void Add_Post();
protected:
private:
    double NumberOfFPS;
    string aspectRatio;
    string resolution;
    double duration;
    double size;
    string format;
};

#endif // VIDEO POST_H
