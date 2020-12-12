#include<bits/stdc++.h>
using namespace std ;

class Main
{
private:
    int x ;
public:
    Main()
    {
        x = 0 ;
    }

    void print()
    {
        cout << "Value is " << x << endl ;
    }

    friend void Fun( Main &obj ) ;
};

void Fun( Main &obj )
{
    obj.x += 5 ; /// x is private but for friend we can access them
}

int main()
{
    Main obj ;
    obj.print() ;
    Fun( obj ) ;
    obj.print() ;
    return 0 ;
}

