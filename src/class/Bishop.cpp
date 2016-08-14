#include "../include/Bishop.h"
#include "../include/Piece.h"

using namespace std;

Bishop::Bishop(string name, string color, int xCoord, int yCoord)
: Piece (name, color, xCoord, yCoord)
{
}

Bishop::~Bishop () // Destructor
{
}

bool Bishop::moveBishop(int curXCoord, int curYCoord, int xCoord, int yCoord) // basically a setter
{
    return 0;
}