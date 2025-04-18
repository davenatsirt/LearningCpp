
/*
    Calculations for Area:


*/
//Shapes: To be calculated
//sudo code
// Area of Circle
// (pi)*r^2
// Area of triangle:
// (bh)/2
// area of square
// a*a
// area of rectangle
// w*l

#include <iostream>
#include <string>
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

#define PI  4

class IShape
{
public:
    virtual int calculateArea(void) = 0;
    virtual int calculateVolume(void) = 0;
};

class CCircle : public IShape
{
    public:
        int radius;

        // Constructor
        CCircle (int r)
        {
            radius = r;
        }

        //Overriding  virtual function
        int calculateArea() override {
            return (PI * radius * radius);
        }
};


//class CNullShape : public IShape

int main()
{
    string userInput{};
    // IShape shape();
    IShape* pShape = nullptr;

    cout << "Choos a shape: " << endl;
    cout << "a. Circle" << endl;   
    cout << "b. Triangle" << endl;   
    cout << "c. square" << endl;   
    cout << "a. Rectangle" << endl;

    cin >> userInput;

    if (userInput == "a" || userInput == "circle")
    {
        int uRadius{};

        cout << "Enter radius of the circle: " << endl;
        cin >> uRadius;

        CCircle circle(uRadius); 

        cout << "Area of the circle is equal to: " << circle.calculatedArea() << endl;
        // assign CCircle to pshape
    }

    else if (userInput == "b" || userInput == "triangle")
    {
        int uBase{}, uHeight{};

        cout << "Enter the base of the triangle: " << endl;
        cin >> uBase;

        cout << "Enter the height of the triangle:  " << endl;
        cin >> uHeight;

        CTriangle triangle(uBase, uHeight, uRadius);

        cout << "Area of the triangle with a base of " << uBase << " and a height of " << uHeight << " is equal to :" << triangle.calculatedArea() << endl;
        // assign CTriangle to pshape
    }
    else 
    {
        cout << "Sorry, you have selected an invalid choice!";
        // assign CNullShape to pshape
    }

    cout << "" << pShape->calculateArea();

    return 0;
}
