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

    for( int i=0; i<6; i++ )
    {
        for( int j=0; j<7; j++ )
        {
            cout << polje[i][j] << " ";
        }
    cout << endl;
    }

    return 0;
}
