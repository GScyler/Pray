#include "House.h"

House::House()
    : Property(), m_vacation(0), m_neighbors(0)
{}
House::House(int price, char* name, bool vacation, int neighbors)
    : Property(price, name), m_vacation(vacation), m_neighbors(neighbors)
{}
House::House(House &house)
    :   Property(house.m_price, house.m_name),
        m_vacation(house.m_vacation),
        m_neighbors(house.m_neighbors)
{}

const bool House::getVacation() const { return m_vacation; }
void       House::setVacation(bool vacation) { m_vacation = vacation; }
const int  House::getNeighbors() const { return m_neighbors; }
void       House::setNeigbors(int neighbors) { m_neighbors = neighbors; }

void House::print() const
{
cout << "\nName: "<< m_name << "\nPrice: " << m_price << "\nVacation: " << m_vacation << "\nNeighbors: " << m_neighbors << endl;
}
