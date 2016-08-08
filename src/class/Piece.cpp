#include "Piece.h"

Piece::Piece (string name, string color, int xCoord, int yCoord) // Constructor
{
    itsName = name;
    itsColor = color;
    itsAlive = true;
    itsXCoord = xCoord;
    itsYCoord = yCoord;
}

Piece::~Piece () // Destructor
{
}

bool Piece::getAlive()
{
    return itsAlive;
}

Piece::setAlive(bool alive)
{
    itsAlive = alive;
}

int Piece::getXCoord()
{
    return itsXCoord;
}

int Piece::getYCoord()
{
    return itsYCoord;
}

Piece::setCoords(int xCoord, int yCoord)
{
    itsXCoord = xCoord;
    itsYCoord = yCoord;
}
