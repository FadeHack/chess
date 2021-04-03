#include <iostream>
#define HEIGHT 25
#define WIDTH 48
using namespace std;
 
class chess
{


};

class chess_board : public chess 
{
protected:
    friend class chess_pieces;
public:
 chess_board()
 {
    for (int i = 0; i < HEIGHT; i++)
    {   cout << "#"<<endl ;
        for (int j = 0; j < WIDTH; j++)
        {
            if (i == 0 || i == (HEIGHT-1) || (j == 0 && i) || i%3 == 0 || j%6 == 0)
            {
                cout << "#" ;
            }
            else
            {
                cout << " ";
            }
           
        }
        
    }
 }
};

class chess_pieces
{


};


int main()
{
        chess_board board;
    return 0;
}
