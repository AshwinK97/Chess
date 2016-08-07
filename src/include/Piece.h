#ifndef Piece_H
#define Piece_H
#include <string>

class Piece
{
    public:
        Piece (string type, string color, string coord); // Constructor
        ~Piece (); //Destructor

        bool getAlive();
        void setAlive(bool alive);

        int getCoords();
        void setCoords(string newCoords);

    private:
        string itsType;
        string itsColor;
        bool itsAlive;
        string itsCoord;
};


#endif // Piece_H
