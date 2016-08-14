#ifndef Pawn_H
#define Pawn_H

using namespace std;

#include "Piece.h"

class Pawn : public Piece
{
	using Piece::Piece;
	bool movePawn(int curXCoord, int curYCoord, int newXCoord, int newYCoord);

	/*
    public:
        Pawn (); // Constructor
        ~Pawn (); //Destructor

    private:
    */
    


};



#endif // Pawn_H