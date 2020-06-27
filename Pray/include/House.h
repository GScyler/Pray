#ifndef HOUSE_H_INCLUDED
#define HOUSE_H_INCLUDED

#include "Property.h"

class House : public Property // ���
{
private:
    bool m_vacation; //���������� (��/���)
    int  m_neighbors;
public:
    House();
    House(int price, char* name, bool vacation, int neighbors);
    House(House &house);

    const bool getVacation() const;
    void       setVacation(bool vacation);
    const int  getNeighbors() const;
    void       setNeigbors(int neighbors);

    void print() const override;
};

#endif // HOUSE_H_INCLUDED
