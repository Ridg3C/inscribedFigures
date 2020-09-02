#include <iostream>
#include "header.h"

using namespace std;

Triangle::Triangle(float sL1, float sL2, float h1, float h2)
{
   // cout<<"Triangle constructor called"<<endl;
    sideLength1=sL1;
    sideLength2=sL2;
    height1=h1;
    height2=h2;
}
Triangle::~Triangle()
{
    //cout<<"Triangle destructor called"<<endl;
}

Square::Square(float sL1, float sL2)
{
   // cout<<"Square constructor called"<<endl;
    sideLength1=sL1;
    sideLength2=sL2;
}

Square::~Square()
{
   // cout<<"Square destructor called"<<endl;
}

Circle::Circle(float r1, float r2, float Q, float rS, float pS, float aS)
{
    //cout<<"Circle constructor called"<<endl;
    radius1=r1;
    radius2=r2;
    q=Q;
    radiusesSum=rS;
    perimetersSum=pS;
    areasSum=aS;
}

Circle::~Circle()
{
    //cout<<"Circle destructor called"<<endl;
}
