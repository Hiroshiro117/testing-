//
//  Aung Lin Htet
//  ID: 823702039
//  Professor Shawn Healey
//  Lab 3
//
//  Created by Aung Htet on 3/25/20.
//  Copyright © 2020 Aung Htet. All rights reserved.
//
// point.cpp

#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

class Point
{
    private:
        float x_coord, y_coord; // coordinates of the point

    public:
        // construct a Point object with x_coord = x and y_coord=y
        Point(float x =0, float y=0)
        {
            x_coord = x;
            y_coord = y;
        }
        
        //constructor of point x and y
        float x() { return x_coord; }
        float y() { return x_coord; }
    
        // calculate the distance of the individual point
        float distance( )
        {
            float result = sqrt(x_coord*x_coord + y_coord*y_coord);
            
            return result;
        };
    
        // compaing left and right point which we call from the main drive
        // return true if compariosn result is much with paramenter
        friend bool operator < ( Point& lhs,  Point& rhs)
        {
            bool condition = false;
            if ( lhs.distance() < rhs.distance() )
                condition = true;

            return condition;
        };

        // call funtion from the first bool operator in order to compare these two points again
        friend bool operator > ( Point& lhs,  Point& rhs)
        {
             return rhs<lhs;
        };
    
        friend bool operator <= ( Point& lhs,  Point& rhs)
        {
             return !(lhs>rhs);
        };
    
        friend bool operator >= ( Point& lhs,  Point& rhs)
        {
            return !(lhs<rhs);
        };
    
        friend bool operator == ( Point& lhs,  Point& rhs)
        {
            return !(lhs < rhs) && !(lhs > rhs);
        };
    
        friend bool operator != ( Point& lhs,  Point& rhs)
        {
            return !(lhs==rhs);
        };
        
        // write the value of x coordinate and y coordinate of each point.
        void overload(Point value)
        {
            cout << "X : " << value.x_coord << " and Y: " << value.y_coord << endl;
        };
        
};

