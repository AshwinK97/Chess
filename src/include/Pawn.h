#ifndef Pawn_H
#define Pawn_H

using namespace std;

#include "Piece.h"

class Pawn : public Piece
{
    public:
        Pawn (string name, string color, int xCoord, int yCoord); // Constructor
        ~Pawn (); //Destructor
        int itsTurn;
        bool movePawn(int curXCoord, int curYCoord,int newXCoord, int newYCoord);

    private:

};



#endif // Pawn_H