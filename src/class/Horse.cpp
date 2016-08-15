#include "../include/Horse.h"
#include "../include/Piece.h"

using namespace std;

Horse::Horse(string name, string color, int xCoord, int yCoord)
: Piece (name, color, xCoord, yCoord)
{
}

Horse::~Horse () // Destructor
{
}

bool Horse::moveHorse(int curXCoord, int curYCoord, int xCoord, int yCoord) // basically a setter
{
    return 0;
}