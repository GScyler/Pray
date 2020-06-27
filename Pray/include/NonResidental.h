#ifndef NONRESIDENTAL_H_INCLUDED
#define NONRESIDENTAL_H_INCLUDED

#include "Property.h"

class NonResidental : public Property // Нежилое помещение
{
private:
    int    m_nonResYears;
    double m_area;
public:
    NonResidental();
    NonResidental(int price, char* name, int nonResidental, double area);
    NonResidental(NonResidental &nonResidental);

    const int    getNonResYears() const;
    void         setNonResYears(int nonResYears);
    const double getArea() const;
    void         setArea(double area);

    void print() const override;
};

#endif // NONRESIDENTAL_H_INCLUDED
