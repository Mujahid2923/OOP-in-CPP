#include<bits/stdc++.h>
using namespace std ;

void Fun()
{
    cout << "First" << endl ;
}

void Fun( int x )
{
    cout << "Second" << endl ;
}

void Fun( int x, int y )
{
    cout << "Third" << endl ;
}

void Fun( double x, double y )
{
    cout << "Forth" << endl ;
}

int main()
{
    Fun() ;
    Fun( 2 ) ;
    Fun( 2.0, 3.0 ) ;
    Fun( 2 , 3 ) ;

    return 0 ;
}

