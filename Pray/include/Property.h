#ifndef PROPERTY_H_INCLUDED
#define PROPERTY_H_INCLUDED

#include <iostream>
#include <conio.h>

using namespace std;

class Property // Недвижимость // Родительский класс
{
protected:
    int   m_price;
    char* m_name;
public:
    Property();
    Property(int price, char* name);
    Property(Property &property);

    const int       getPrice() const;
    void            setPrice(int price);
    char*     getName() const;
    void            setName (char* name);

    virtual void    print() const = 0;
};

#endif // PROPERTY_H_INCLUDED
