#include "../include/Castle.h"
#include "../include/Piece.h"

using namespace std;

Castle::Castle(string name, string color, int xCoord, int yCoord)
: Piece (name, color, xCoord, yCoord)
{
}

Castle::~Castle () // Destructor
{
}

bool Castle::moveCastle(int curXCoord, int curYCoord, int xCoord, int yCoord) // basically a setter
{
    return 0;
}