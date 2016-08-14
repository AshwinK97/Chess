#ifndef Queen_H
#define Queen_H

using namespace std;

#include "Piece.h"

class Queen : public Piece
{
    public:
        Queen (string name, string color, int xCoord, int yCoord); // Constructor
        ~Queen (); //Destructor
        bool moveQueen(int curXCoord, int curYCoord,int newXCoord, int newYCoord);

    private:

};



#endif // Queen_H