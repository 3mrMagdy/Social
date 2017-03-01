#include <bits/stdc++.h>
#ifndef IMAGE_POST_H
#define IMAGE_POST_H
#include "Post.h"
using namespace std;

class Image_Post:public Post
{
public:
    Image_Post();
    Image_Post(string,string ,string,double);
    virtual ~Image_Post();
    void Show_Post();
    void Add_Post();
    void Set_resolution (string);
    void Set_size (double);
    void Set_format (string);
    string Get_resolution() const;
    double Get_size() const;
    string Get_format() const;

protected:
private:
    string resolution;
    double size;
    string format;

};

#endif // IMAGE POST_H
