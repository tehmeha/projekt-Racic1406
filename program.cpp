#include <iostream>
using namespace std;

int main()
{
    int polje[6][7]={ {0,0,0,0,0,0,0},
                      {0,0,0,0,0,0,0},
                      {0,0,0,0,0,0,0},
                      {0,0,0,0,0,0,0},
                      {0,0,0,0,0,0,0},
                      {0,0,0,0,0,0,0}};
    int igrac=1;
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

        for( int j=0; j<5; j++)
        {
            for(int i=0; i<6; i++ )
            {
                if(polje[0+i][0+j]!=0 && polje[0+i][0+j]==polje[0+i][1+j] && polje[0+i][0+j]==polje[0+i][2+j] && polje[0+i][0+j]==polje[0+i][3+j])
                {
                    cout << endl << endl <<  "Pobijedio je Igrac " << polje[0+i][0+j] << endl << endl << endl;
                    return 0;
                }
            }
        }

        for( int i=0; i<3; i++)
        {
            for(int j=0; j<7; j++ )
            {
                if(polje[0+i][0+j]!=0 && polje[0+i][0+j]==polje[1+i][0+j] && polje[0+i][0+j]==polje[2+i][0+j] && polje[0+i][0+j]==polje[3+i][0+j])
                {
                    cout << endl << endl <<  "Pobijedio je Igrac " << polje[0+i][0+j] << endl << endl << endl;
                    return 0;
                }
            }
        }

        for( int i=0; i<3; i++)
        {
            for(int j=0; j<4; j++ )
            {
                if(polje[0+i][0+j]!=0 && polje[0+i][0+j]==polje[1+i][1+j] && polje[0+i][0+j]==polje[2+i][2+j] && polje[0+i][0+j]==polje[3+i][3+j])
                {
                    cout << endl << endl <<  "Pobijedio je Igrac " << polje[0+i][0+j] << endl << endl << endl;
                    return 0;
                }
            }
        }

        for( int i=0; i<3; i++)
        {
            for(int j=0; j<4; j++ )
            {
                if(polje[0+i][3+j]!=0 && polje[0+i][3+j]==polje[1+i][2+j] && polje[0+i][3+j]==polje[2+i][1+j] && polje[0+i][3+j]==polje[3+i][0+j])
                {
                    cout << endl << endl <<  "Pobijedio je Igrac " << polje[0+i][3+j] << endl << endl << endl;
                    return 0;
                }
            }
        }

        int stupac;
        cout << endl << endl << "Igrac " << igrac <<":" << "  " << "Unesite stupac u koji zelite postaviti zeton: ";
        do
        {
        cin >> stupac;
        for ( int i=5; i>=0; i--)
        {
            if( polje[i][stupac]==0 )
            {
                polje[i][stupac]=igrac;
                break;
            }
        }
        }
        while(stupac < 0 && stupac > 6);
        if(igrac==1)
        {
            igrac=2;
        }
        else
        {
         igrac=1;
        }
        cout << endl << endl << endl << endl << endl << endl <<endl << endl << endl << endl << endl << endl << endl << endl;


    }



    return 0;
}



