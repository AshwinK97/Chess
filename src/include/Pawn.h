#ifndef Pawn_H
#define Pawn_H

#include "Piece.h"

class Pawn : public Piece
{
    public:
        Pawn (); // Constructor
        ~Pawn (); //Destructor

        bool movePawn(int curXCoord, int curYCoord, int ,int newXCoord, int newYCoord);
    private:


};



#endif // Pawn_H