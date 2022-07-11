//abstract base class and pure virtual class

#include <iostream>
#include <cstring>
using namespace std;

class CWH
{
protected:
    char tittle[30];
    float rating;

public:
    CWH(string s, float r)
    {
        string tittle = s;
        rating = r;
    }
    virtual void display() = 0; //do - nothing function --> pure virtual function
};
class CWHvideo : public CWH
{
    float videolength;

public:
    CWHvideo(string s, float r, float vl) : CWH(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "this is the amazing video with tittle " << tittle << endl;
        cout << "rating :" << rating << " out of 5 stars " << endl;
        cout << "length of this video is : " << videolength << " minutes " << endl;
    }
};
class CWHtext : public CWH
{
    int words;

public:
    CWHtext(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "this is the amazing text tutorial with tittle " << tittle << endl;
        cout << "rating of this text tutorial :" << rating << "out of 5 stars " << endl;
        cout << "no of words in this tutorial is : " << words << " words " << endl;
    }
};
int main()
{
    string tittle;
    float rating, vlen;
    int words;

    //for codewith harry video
    tittle = "django tutorial";
    vlen = 5.67;
    rating = 4.34;
    CWHvideo djvideo(tittle, rating, vlen);
    //djvideo.display();

    //for codewith harry video  text
    tittle = "django tutorial text ";
    words = 534;
    rating = 4.34;
    CWHtext djtext(tittle, rating, words);
    //djtext.display();

    CWH *tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;
    tuts[0]->display();
    tuts[1]->display();
    return 0;
}