#ifndef STATUS_H
#define STATUS_H
#include"Post.h"

class Status :public Post
{
public:
    Status();
    virtual ~Status();
    virtual void Show_Post();
    virtual void Add_Post();
protected:
private:
};

#endif // STATUS_H
