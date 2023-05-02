#include "album.h"

Album::Album():lot(0){}
void Album::copyAll(const Album& o)
{
    nameAlbum = o.nameAlbum;
    author = o.author;
    inter = o.inter;
    year = o.year;
    lot = o.lot;
    price = o.price;
}
string Album::toString() const
{
 string res;
    res = "\n\t------------------------------------------";
    res += "\n\tAlbum: ";
    res += nameAlbum;
    res += "\n\tAutor: ";
    res += author;
    res += "\n\tInterprete:";
    res += inter;
    res += "\n\tAño: ";
    res += to_string(year);
    res += "\n\tCantidad Disponible: ";
    res += to_string(lot);
    res += "\n\tPrecio: ";
    res += to_string(price);
    res += "\n\t-----------------------------------------\n";
    return res;
}

Album::Album(const Album& o)
{
  copyAll(o);
}
void Album::setNameAlbum(const string& nameal)
{
    nameAlbum = nameal;
}
void Album::setAuthor(const string& aut)
{
    author = aut;
}

void Album::setInter(const string& in)
{
    inter = in;
}

void Album::setYear(const int& yea)
{
    year = yea;
}

void Album::setLot(const int& lo)
{
    lot = lo;
}

void Album::setPrice(const float& pr)
{
    price = pr;
}
string Album::getNameAlbum()
{
    return nameAlbum;
}
string Album::getAuthor()
{
    return author;
}

string Album::getInter()
{
    return inter;
}

int Album::getYear()
{
    return year;
}

int Album::getLot()
{
    return lot;
}

float Album::getPrice()
{
    return price;
}
Album& Album::operator=(const Album& o)
{
    copyAll(o);
    return *this;
}
bool Album::operator==(const Album& s)
{
   return nameAlbum == s.nameAlbum;
}

bool Album::operator!=(const Album& s)
{
    return nameAlbum != s.nameAlbum;
}

bool Album::operator<(const Album& s)
{
    return nameAlbum < s.nameAlbum;
}

bool Album::operator<=(const Album& s)
{
    return nameAlbum <= s.nameAlbum;
}

bool Album::operator>(const Album& s)
{
    return nameAlbum > s.nameAlbum;
}

bool Album::operator>=(const Album& s)
{
    return nameAlbum >= s.nameAlbum;
}

