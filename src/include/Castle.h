#ifndef Castle_H
#define Castle_H

using namespace std;

#include "Piece.h"

class Castle : public Piece
{
    public:
        Castle (string name, string color, int xCoord, int yCoord); // Constructor
        ~Castle (); //Destructor
        bool moveCastle(int curXCoord, int curYCoord,int newXCoord, int newYCoord);

    private:

};



#endif // Castle_H