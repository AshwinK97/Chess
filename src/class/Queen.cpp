#include "../include/Queen.h"
#include "../include/Piece.h"

using namespace std;

Queen::Queen(string name, string color, int xCoord, int yCoord)
: Piece (name, color, xCoord, yCoord)
{
}

Queen::~Queen () // Destructor
{
}

bool Queen::moveQueen(int curXCoord, int curYCoord, int xCoord, int yCoord) // basically a setter
{
    return 0;
}