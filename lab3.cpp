//
//  Aung Lin Htet
//  ID: 823702039
//  Professor Shawn Healey
//  Lab 3
//
//  Created by Aung Htet on 3/25/20.
//  Copyright © 2020 Aung Htet. All rights reserved.
//
//  lab3.cpp

#include <cstdlib>
#include <iostream>
#include "point.cpp"
#include <math.h>
using namespace std;

int main()
{
   
    //  call overload funtions from point.cpp\
    //  I use a b c three point to test all possible comparison ways for these three points' distance
     
    
    Point p;
    Point a(1, 1);
    Point b(1,-1);
    Point c(2,-1);
    
    if ( a < b )
        cout << "Point A <  B is True\n";
    else
        cout << "Point A <  B is False\n";
    
    if ( a > b )
        cout << "Point A >  B is True\n";
    else
        cout << "Point A >  B is False\n";
    
    if ( a <= b )
        cout << "Point A <= B is True\n";
    else
        cout << "Point A <= B is False\n";
    
    if ( a >= b )
        cout << "Point A >= B is True\n";
    else
        cout << "Point A >= B is False\n";
    
    if ( a == b )
        cout << "Point A == B is True\n";
    else
        cout << "Point A == B is False\n";
    
    if ( a != b )
        cout << "Point A != B is True\n";
    else
        cout << "Point A != B is False\n";
    
    if ( a < c )
        cout << "Point A <  C is True\n";
    else
        cout << "Point A <  C is False\n";
    
    if ( a > c )
        cout << "Point A >  C is True\n";
    else
        cout << "Point A >  C is False\n";
    
    if ( a <= c )
        cout << "Point A <= C is True\n";
    else
        cout << "Point A <= C is False\n";
    
    if ( a >= c )
        cout << "Point A >= C is True\n";
    else
        cout << "Point A >= C is False\n";
    
    if ( a == c )
        cout << "Point A == C is True\n";
    else
        cout << "Point A == C is False\n";
    
    if ( a != c )
        cout << "Point A != C is True\n";
    else
        cout << "Point A != C is False\n";
    
    // Overload operation for each points
    cout << "\nOverloading operator\n" ;
    cout << "for point a ";
    p.overload(a);
    cout << "for point b ";
    p.overload(b);
    cout << "for point c ";
    p.overload(c);
    
    
    
    

        
    return 0;
}
