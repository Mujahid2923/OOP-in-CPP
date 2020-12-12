#include<bits/stdc++.h>
using namespace std ;

class Base
{
protected:
    int val ;
};

class Derived1 : virtual public Base
{
public:
    Derived1()
    {
        val = 1 ;
    }
    void getData()
    {
        cout << "Derived 1 value : " << val << endl ;
    }
};

class Derived2 : virtual public Base
{
public:
    Derived2()
    {
        val = 2 ;
    }
    void getData()
    {
        cout << "Derived 2 value : " << val << endl ;
    }
};

class Derived3 : public Derived1, public Derived2
{
    /// Here two copies of val in Derived3 , to remove this we need virtual keyword
public:
    void getData()
    {
        Derived1 :: getData(); /// Always print Derived2 value as it is in the last, If we change the order public Derived2, public Derived1 , then alter result
        Derived2 :: getData();
    }
};



int main()
{
    Derived3 obj ;
    obj.getData() ;
    return 0 ;
}
