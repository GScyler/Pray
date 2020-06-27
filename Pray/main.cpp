#include "Flat.h"
#include "House.h"
#include "NonResidental.h"

int main()
{
    Flat A;
    A.print();
    A.setName("Test");
    Flat B = A;
    B.print();
    NonResidental C(15000000, "None", 12, 600);
    C.setName(B.getName());
    C.print();
}
