#include <iostream>
#include <cmath>

using namespace std;

class Menu;

class Shape
{
public:
    virtual void gatherProperties()=0;
    virtual void showProperties()=0;
};

class Triangle :public Shape
{
public:
    float sideLength1;
    float sideLength2;
    float height1;
    float height2;

    virtual void gatherProperties();
    virtual void showProperties();
    friend class Circle;

    Triangle(float=0, float=0, float=0, float=0);
    ~Triangle();
};

class Square :public Shape
{
public:
    float sideLength1;
    float sideLength2;

    virtual void gatherProperties();
    virtual void showProperties();
    friend class Circle;
    friend void menu();

    Square(float=0, float=0);
    ~Square();
};

class Circle
{
public:
    float radius1;
    float radius2;
    float q;
    float radiusesSum;
    float perimetersSum;
    float areasSum;

    void circleInTriangle(float sL1);
    void circleInSquare(float sL1);
    friend class Menu;

    Circle(float=0, float=0, float=0, float=0, float=0, float=0);
    ~Circle();
};
