#include "Flat.h"

Flat::Flat()
    : Property(), m_floorNumber(0), m_roomsNumber(0)
{}
Flat::Flat(int price, char* name, int floorNumber, int roomsNumber)
    : Property(price, name), m_floorNumber(floorNumber), m_roomsNumber(roomsNumber)
{}
Flat::Flat(Flat &flat)
    :   Property(flat.m_price, flat.m_name),
        m_floorNumber(flat.m_floorNumber),
        m_roomsNumber(flat.m_roomsNumber)
{}

const int   Flat::getFloorNumber() const { return m_floorNumber; }
void        Flat::setFloorNumber(int floorNumber){ m_floorNumber = floorNumber; }
const int   Flat::getRoomsNumber() const { return m_roomsNumber; }
void        Flat::setRoomsNumber(int roomsNumber){ m_roomsNumber = roomsNumber; }

void Flat::print() const
{
cout << "\nName: "<< m_name << "\nPrice: " << m_price << "\nFloor number: " << m_floorNumber << "\nRooms number: " << m_roomsNumber << endl;
}
