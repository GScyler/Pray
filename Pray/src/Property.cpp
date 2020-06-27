#include "Property.h"

Property::Property()
    : m_price(0), m_name ("None")
{}
Property::Property(int price, char* name)
    : m_price(price), m_name(name)
{}
Property::Property(Property &property)
    : m_price(property.m_price), m_name(property.m_name)
{}

const int   Property::getPrice() const { return m_price; }
void        Property::setPrice(int price){ m_price = price; }
char* Property::getName() const { return m_name; }
void        Property::setName(char* name) { m_name = name; }
