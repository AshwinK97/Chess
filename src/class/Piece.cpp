#include "../include/Piece.h"

using namespace std;

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

string Piece::getName()
{
    return itsName;
}

bool Piece::getAlive()
{
    return itsAlive;
}

void Piece::setAlive(bool alive)
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

void Piece::setCoords(int xCoord, int yCoord)
{
    itsXCoord = xCoord;
    itsYCoord = yCoord;
}
