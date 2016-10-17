#include <iostream>
#include <iomanip>
using namespace std;

const int floorSize = 20;
bool floor[ floorSize ][ floorSize ] = { 0 };
bool penSide = 1;
int tortoiseDir = 2;
int locate[ 2 ] = { 0, 0 };

void torMove( int );
bool edgeCheck( int[] );
void printFloor();


int main()
{
    char order;

    do
    {
        order = cin.get();
        switch( order )
        {
        case '1':
            penSide = 0;
            break;
        case '2':
            penSide = 1;
            break;
        case '3':
            tortoiseDir == 4 ? tortoiseDir = 1 : tortoiseDir++;
            break;
        case '4':
            tortoiseDir == 1 ? tortoiseDir = 4 : tortoiseDir--;
            break;
        case '5':
            if( cin.get() == ',' )
            {
                int pace;
                cin >> pace;

                torMove( pace );
            }
            break;
        case '6':
            printFloor();
            break;
        case ',':
            break;
        case '9':
            return 0;
            break;
        }
    }
    while( 1 );
}

void torMove( int pace )
{
    int endLoc[ 2 ];


    if( tortoiseDir ==1 )
    {
        endLoc[ 0 ] = locate[ 0 ] - pace;
        endLoc[ 1 ] = locate[ 1 ];
    }
    else if( tortoiseDir == 2 )
    {
        endLoc[ 0 ] = locate[ 0 ];
        endLoc[ 1 ] = locate[ 1 ] + pace;
    }
    else if( tortoiseDir == 3 )
    {
        endLoc[ 0 ] = locate[ 0 ] + pace;
        endLoc[ 1 ] = locate[ 1 ];
    }
    else if( tortoiseDir == 4 )
    {
        endLoc[ 0 ] = locate[ 0 ];
        endLoc[ 1 ] = locate[ 1 ] - pace;
    }

    if( edgeCheck( endLoc ) == 0 )
    {
        cout << "Error aim! Please set again!" << endl;
    }
    else
    {
        if( penSide == 1 )
        {
            if( tortoiseDir ==1 )
            {
                for( int i = 0; i < pace; i++ )
                {
                    floor[ locate[ 0 ] - i ][ locate[ 1 ] ] = 1;
                }
            }
            else if( tortoiseDir == 2 )
            {
                for( int i = 0; i < pace; i++ )
                {
                    floor[ locate[ 0 ] ][ locate[ 1 ] + i ] = 1;
                }
            }
            else if( tortoiseDir == 3 )
            {
                for( int i = 0; i < pace; i++ )
                {
                    floor[ locate[ 0 ] + i ][ locate[ 1 ] ] = 1;
                }
            }
            else if( tortoiseDir == 4 )
            {
                for( int i = 0; i < pace; i++ )
                {
                    floor[ locate[ 0 ] ][ locate[ 1 ] - i ] = 1;
                }
            }
        }
        locate[ 0 ] = endLoc[ 0 ];
        locate[ 1 ] = endLoc[ 1 ];
    }
}

bool edgeCheck( int in[] )
{
    if( in[ 0 ] < floorSize - 1 && in[ 0 ] >= 0 &&
            in[ 1 ] < floorSize - 1 && in[ 1 ] >= 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void printFloor()
{
    for( int i = 0; i < floorSize; i++ )
    {
        for( int j = 0; j < floorSize; j++ )
        {
            if( floor[ i ][ j ] )
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << "end of floor" << endl;
}
