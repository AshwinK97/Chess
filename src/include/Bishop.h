#ifndef Bishop_H
#define Bishop_H

using namespace std;

#include "Piece.h"

class Bishop : public Piece
{
    public:
        Bishop (string name, string color, int xCoord, int yCoord); // Constructor
        ~Bishop (); //Destructor
        bool moveBishop(int curXCoord, int curYCoord,int newXCoord, int newYCoord);

    private:

};



#endif // Bishop_H