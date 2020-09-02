#include <iostream>
#include <cmath>
#include "header.h"

using namespace std;

void Triangle::gatherProperties()
{
    cout<<endl;
    cout<<"Input side length of equilateral triangle: ";
    cin>>sideLength1;
    sideLength2=0.5*sideLength1;
}


