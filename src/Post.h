#ifndef POST_H
#define POST_H
#include <bits/stdc++.h>
using namespace std;


class Post
{
protected:
    char ** comments;
    char ** tags;
    char ** likes;
    char ** shares;
    char ** feelings;
    string text;
    int CommentsCount;
    int TagsCount;
    int LikesCount;
    int SharesCount;
    int FeelingsCount;
public:
    Post();
    Post(string);
    virtual ~Post();
    void Add_like(char*);
    void Add_feeling(char*);
    void Add_comment(char*);
    void Add_share(char*);
    void Add_tag(char*);
    void Add_text(string);
    virtual void Add_Post() =0;
    virtual void Show_Post() =0;
    void Show_text();
    void Show_shares();
    void Show_likes();
    void Show_comments();
    void Show_feelings();
    void Show_tags();
private:
};

#endif // POST_H
