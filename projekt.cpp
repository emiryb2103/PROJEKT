
#include <iostream>
using namespace std;

//struktura opisujaca postac
struct P
    {
    int x,y;  //pozycja na tablicy dwuwymiarowej (mapie)
    int hp;   //health points
    };

int main ()

{
//wymiary mapy
const int W=10;
const int S=10;

//mapa
char M[W][S];
    for (int i=0; i<W; i++)
        {
        for (int j=0; j<S; j++)
            {
            M[i][j]='.'; //'.' oznacza puste pole
            }
        }

//obiekt gracza
P gr;
gr.x=0;
gr.y=0;
gr.hp=100;

char R;

 //Petla gry
 while (true)
    {
    for (int i=0; i<W; i++)
        {
        for (int j=0; j<S; j++)
            {
            if (i==gr.x && j==gr.y)
                cout << "P";
            else cout << M[i][j] << " ";
            }
        }
    }


}

