#include <iostream>
using namespace std;

int main()
{
    int polje[6][7]={ {0,0,0,0,0,0,0},
                      {0,0,0,0,0,0,0},
                      {0,2,0,1,0,0,0},
                      {0,1,2,1,0,0,0},
                      {0,1,1,2,0,0,0},
                      {1,2,2,2,1,2,2}};

    while(1)
    {
        cout << endl;
        cout << "   ";
        for( int i=0; i<7; i++ )
        {
            cout << i << " ";
        }
        cout << endl << "-----------------" << endl;

        for( int i=0; i<6; i++ )
        {
            cout << i << "| ";
            for( int j=0; j<7; j++ )
            {
                cout << polje[i][j] << " ";
            }
        cout << endl;
        }



        int stupac;
        cout << "Unesite stupac u koji zelite postaviti zeton: ";
        do
        {
        cin >> stupac;
        for ( int i=5; i>=0; i--)
        {
            if( polje[i][stupac]==0 )
            {
                polje[i][stupac]=1;
                break;
            }
        }
        }
        while(stupac < 0 && stupac > 6);
    }


    return 0;
}



