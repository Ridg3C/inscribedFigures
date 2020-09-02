#include <iostream>
#include <cmath>
#include "header.h"

using namespace std;

void Circle::circleInTriangle(float sL1)
{
    radius1=(sL1*sqrt(3))/6;
    radius2=(sL1*sqrt(3))/12;
    q=radius2/radius1;
    radiusesSum=radius1/(1-q);
    perimetersSum=(2*radius1)/(1-((2*radius2))/((2*radius1)));
    areasSum=(pow(radius1,2))/(1-((pow(radius2,2))/(pow(radius1,2))));

    cout<<"r1 = "<<radius1<<", "<<"r2 = "<<radius2<<", "<<"q = "<<q<<endl;
    cout<<endl;
    cout<<"Sum of radiuses of all circles = "<<radiusesSum<<endl;
    cout<<"Sum of perimeters of all circles = "<<perimetersSum<<"pi"<<endl;
    cout<<"Sum of areas of all circles = "<<areasSum<<"pi"<<endl;
}
