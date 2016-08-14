#include "../include/King.h"
#include "../include/Piece.h"

using namespace std;

King::King(string name, string color, int xCoord, int yCoord)
: Piece (name, color, xCoord, yCoord)
{
}

King::~King () // Destructor
{
}

bool King::moveKing(int curXCoord, int curYCoord, int xCoord, int yCoord) // basically a setter
{
    return 0;
}