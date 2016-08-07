#include "Piece.h"

Piece::Piece (string type, string color, string coord) // Constructor
{
    itsType = type;
    itsColor = color;
    itsAlive = true;
    itsCoord = coord;
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

int Piece::getCoord()
{
    return itsCoord;
}

Piece::setAlive(string newCoord)
{
    itsCoord = newCoord;
}
