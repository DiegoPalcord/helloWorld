#ifndef ALBUM_H_INCLUDED
#define ALBUM_H_INCLUDED

#include <string>

using namespace std;

class Album{
private:
    string nameAlbum;
    string author;
    string inter;
    int year;
    int lot;
    float price;
    void copyAll(const Album&);
public:
    Album();
    Album(const Album&);
    string toString()const;

    void setNameAlbum(const string&);
    void setAuthor(const string&);
    void setInter(const string&);
    void setYear(const int&);
    void setLot(const int&);
    void setPrice(const float&);

    string getNameAlbum();
    string getAuthor();
    string getInter();
    int getYear();
    int getLot();
    float getPrice();

    Album& operator = (const Album&);
     bool operator == (const Album&);
    bool operator != (const Album&);
    bool operator < (const Album&);
    bool operator <= (const Album&);
    bool operator > (const Album&);
    bool operator >= (const Album&);
};
#endif // ALBUM_H_INCLUDED
