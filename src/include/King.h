#ifndef King_H
#define King_H

using namespace std;

#include "Piece.h"

class King : public Piece
{
    public:
        King (string name, string color, int xCoord, int yCoord); // Constructor
        ~King (); //Destructor
        bool moveKing(int curXCoord, int curYCoord,int newXCoord, int newYCoord);

    private:

};



#endif // King_H