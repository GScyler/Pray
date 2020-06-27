#ifndef FLAT_H_INCLUDED
#define FLAT_H_INCLUDED

#include "Property.h"

class Flat : public Property //  вартира
{
private:
    int m_floorNumber;
    int m_roomsNumber;
public:
    Flat();
    Flat(int price, char* name, int floorNumber, int roomsNumber);
    Flat(Flat &flat);

    const int getFloorNumber() const;
    void      setFloorNumber(int floorNumber);
    const int getRoomsNumber() const;
    void      setRoomsNumber(int roomsNumber);

    void print() const override;
};

#endif // FLAT_H_INCLUDED
