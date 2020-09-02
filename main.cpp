#include <iostream>
#include "header.h"

using namespace std;

int choice;

int main()
{
    Triangle t;
    Square s;
    Circle c;

    Shape *pointer;

    cout<<"Hello this is a program which enable you to calculate perimeter and area of circles inscribed infinitely many times in other figures"<<endl;
    cout<<"Choose the figure you want circle to be inscribed in: "<<endl;
    cout<<"1.Triangle"<<endl;
    cout<<"2.Square"<<endl;
    cin>>choice;
    cout<<endl;


    switch(choice)
    {
    case 1:
        {
            cout<<"A circle was inscribed in an equilateral triangle with side length a,"<<endl;
            cout<<"in this circle, another equilateral triangle was inscribed and in this triangle another circle was inscribed, and so on"<<endl;
            pointer = &t;
            pointer->gatherProperties();
            pointer->showProperties();
            c.circleInTriangle(t.sideLength1);
        }
        break;
    case 2 :
        {
            cout<<"A circle was inscribed in a square with side length a,"<<endl;
            cout<<"in this circle, another square was inscribed and in this square another circle was inscribed and so on"<<endl;
            pointer = &s;
            pointer->gatherProperties();
            pointer->showProperties();
            c.circleInSquare(s.sideLength1);
        }
        break;
    default:
        {
            cout<<"There is not such option"<<endl;
        }
    }
    return 0;
}
