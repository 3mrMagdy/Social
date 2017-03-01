#include "Post.h"
#include <bits/stdc++.h>
#include <new>
using namespace std;

Post::Post()
{
    //ctor
    text="";
    CommentsCount=0;
    TagsCount=0;
    LikesCount=0;
    SharesCount=0;
    FeelingsCount=0;
    try
    {
        likes=new char*[110];
        comments=new char*[110];
        tags=new char*[110];
        shares=new char*[110];
        feelings=new char*[110];
    }
    catch (bad_alloc)
    {

        cout<<"No enough memory for dynamic allocation\n";
    }



}
Post::Post(string txt)
{
    text=txt;
    CommentsCount=0;
    TagsCount=0;
    LikesCount=0;
    SharesCount=0;
    FeelingsCount=0;
    try
    {
        likes=new char*[110];
        comments=new char*[110];
        tags=new char*[110];
        shares=new char*[110];
        feelings=new char*[110];
    }
    catch (bad_alloc)
    {

        cout<<"No enough memory for dynamic allocation\n";
    }

}

Post::~Post()
{
    //dtor
    delete [] likes;
    delete [] comments;
    delete [] shares;
    delete [] tags;
    delete [] feelings;

}
void  Post:: Add_text(string s)
{
    text=s;
}
void Post::Add_like(char* s)
{
    likes[LikesCount]=s;
    LikesCount++;

}
void Post::Add_feeling(char* s)
{
    feelings[FeelingsCount]=s;
    FeelingsCount++;


}
void Post::Add_comment(char* s)
{
    comments[CommentsCount]=s;
    CommentsCount++;

}
void Post::Add_share(char* s)
{
    shares[SharesCount]=s;
    SharesCount++;

}
void Post::Add_tag(char* s)
{
    tags[TagsCount]=s;
    TagsCount++;

}
void Post::Show_shares()
{
    cout<<"Shares : "<<endl;
    for(int i=0; i<SharesCount; i++)
        cout<<shares[i]<<endl;

}
void Post::Show_likes()
{
    cout<<"Likes : "<<endl;
    for(int i=0; i<LikesCount; i++)
        cout<<likes[i]<<endl;
}
void Post::Show_comments()
{
    cout<<"Comments : "<<endl;
    for(int i=0; i<CommentsCount; i++)
        cout<<comments[i]<<endl;
}
void Post::Show_feelings()
{
    cout<<"Feelings : "<<endl;
    for(int i=0; i<FeelingsCount; i++)
        cout<<feelings[i]<<endl;
}
void Post:: Show_tags()
{
    cout<<"Tags : "<<endl;
    for(int i=0; i<TagsCount; i++)
        cout<<tags[i]<<endl;
}
void  Post::Show_text()
{
    cout<<text<<endl;
}

