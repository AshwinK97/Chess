#include "../include/Pawn.h"
#include "../include/Piece.h"

using namespace std;

Pawn::Pawn(string name, string color, int xCoord, int yCoord)
: Piece (name, color, xCoord, yCoord)
{

}

Pawn::~Pawn () // Destructor
{
}

bool Pawn::movePawn(int curXCoord, int curYCoord, int xCoord, int yCoord) // basically a setter
{
    return 0;
}