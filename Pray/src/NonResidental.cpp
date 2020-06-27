#include "NonResidental.h"

NonResidental::NonResidental()
    : Property(), m_nonResYears(0), m_area(0)
{}
NonResidental::NonResidental(int price, char* name, int nonResYears, double area)
    : Property(price, name), m_nonResYears(nonResYears), m_area(area)
{}
NonResidental::NonResidental(NonResidental &nonResidental)
    :   Property(nonResidental.m_price, nonResidental.m_name),
        m_nonResYears(nonResidental.m_nonResYears),
        m_area(nonResidental.m_area)
{}

const int    NonResidental::getNonResYears() const { return m_nonResYears; }
void         NonResidental::setNonResYears(int nonResYears) { m_nonResYears = nonResYears; }
const double NonResidental::getArea() const { return m_area; }
void         NonResidental::setArea(double area) { m_area = area; }

void NonResidental::print() const
{
cout << "\nName: "<< m_name << "\nPrice: " << m_price << "\nNonResYears: " << m_nonResYears << "\nArea: " << m_area << endl;
}
