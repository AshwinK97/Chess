#ifndef Horse_H
#define Horse_H

using namespace std;

#include "Piece.h"

class Horse : public Piece
{
    public:
        Horse (string name, string color, int xCoord, int yCoord); // Constructor
        ~Horse (); //Destructor
        bool moveHorse(int curXCoord, int curYCoord,int newXCoord, int newYCoord);

    private:

};



#endif // Horse_H