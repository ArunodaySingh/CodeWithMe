//Virtual Functions Example + Creation Rules in C++
// Use for Run time polymorphism

#include<iostream>
#include<cstring>
using namespace std;

class CWH{
    protected:
     char title[30];
     float rating;
     public:
     CWH(char *s , float r)
     {
        strcpy(title,s);
        rating=r;
     }
     virtual void display(){}

};

class CWHVideo::public CWH{
    float videoLenght;
    public:
    CWHVIdeo(char *s,float r,int vl):CWH(s,r)
    {
        videoLength=vl;
    }
    void display(){
        cout<<"This is an amazing video with title "<<title<<endl;
        cout<<"Ratings of the text in this tutorial: "<<rating<<"out of 5 stars"<<endl;
        cout<<"No of words in this text tutorial is:"<<words<<"words"<<endl;
    }

};
class CWHText::public CWH{
    int words;
    public:
    CWHTextchar *s,float r,int vl):CWH(s,r)
    {
        videoLength=vl;
    }
}


int main()
{

    return 0;
}