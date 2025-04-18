/*
Calculations for Volume:
Circle : PI(r*r)h
Triangle : 1/2 bhl
square : s*s*s
rectangle: lwh
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
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::string;

#define PI  4


class IShape
{
     public:
         virtual int calculateArea() = 0;
         virtual int calculateVolume() = 0;
};

// class get_volume

//class CCircle: public get_shape_area, public get_volume
class CCircle : public IShape
{
    private:
        int radius;
        int height;

    public:
        //Constructor for Volume
        CCircle (int r, int h) : 
            radius(r),
            height(h){}
        
        CCircle (int r) :
            radius(r),
            height(0){}
        //Overriding  virtual function
        int calculateArea() override {
            return (PI * radius * radius);
        }

        int calculateVolume() override {
            return (PI * radius * radius * height);
        }
};

class CTriangle : public IShape
{
    private:
        int base{}, height{}, length{};

    public:
        // Constructor for Area
        CTriangle (int b, int h) : 
        base(b),
        height(h),
        length(0){}

        //Constructor for Volume
        CTriangle (int b, int h, int l) :
            base(b),
            height(h),
            length(l){}

        // Overriding virtual function
        int calculateArea() override {
            return ((base * height) / 2);
        }
        int calculateVolume() override{
            return ((base * height * length) / 2);
        }
};

class CRectangle: public IShape
{
    private:
        int length{}, width{}, height{};

    public:
        //Constructor for Area
        CRectangle (int l, int w) :
        length(l),
        width(w),
        height(0){}

        //Constructor for Volume
        CRectangle(int l, int w, int h) :
        length(l),
        width(w),
        height(h){}

        //Overriding virtual function
        int calculateArea() override {
            return (length * width);
        }
        int calculateVolume() override {
            return (length * width * height);
        }
};

class CSquare : public IShape
{
    private: 
        int side{};
    
    public:
        //Constructor for Area
        CSquare (int s) : 
        side(s){}

        //Override virtual function
        int calculateArea() override {
            return (side * side);
        }
        int calculateVolume() override {
            return (side * side * side);
        }
};

int main()
{
    string userInput{};

    cout << "Choos a shape: " << endl;
    cout << "a. Circle" << endl;   
    cout << "b. Triangle" << endl;   
    cout << "c. square" << endl;   
    cout << "d. Rectangle" << endl;

    cin >> userInput;
    std::transform (userInput.begin(), userInput.end(), userInput.begin(), ::tolower);

    string userInput_calc{};
    
    if (userInput == "a" || userInput == "circle")
    {
        int uRadius{};
        int uHeight{};
        cout << "What do you want to calculate? " << endl;
        cout << "a. Area \nb. Volume " << endl;

        cin >> userInput_calc;
        std::transform(userInput_calc.begin(), userInput_calc.end(), userInput_calc.begin(), ::tolower);
        if (userInput_calc == "a" || userInput_calc == "area")
        {
            cout << "Enter radius: " << endl;
            cin >> uRadius;
            CCircle circle(uRadius); 

            cout << "Area of the circle is equal to: " << circle.calculateArea() << endl;
        }
        else if (userInput_calc == "b" || userInput_calc == "volume")
        {
            cout << "Enter radius: " << endl;
            cin >> uRadius;
            cout << "Enter height: " << endl;
            cin >> uHeight;

            CCircle circle(uRadius, uHeight); 
            cout << "Area of the circle is equal to: " << circle.calculateVolume() << endl;
        }
        else
        {
            cout << "Sorry! You have input the wrong value" << endl;
        }
    }

    else if (userInput == "b" || userInput == "triangle")
    {
        int uBase{};
        int uHeight{};
        int uLength{};
        cout << "What do you want to calculate? " << endl;
        cout << "a. Area \nb. Volume " << endl;

        cin >> userInput_calc;
        std::transform(userInput_calc.begin(), userInput_calc.end(), userInput_calc.begin(), ::tolower);

        if (userInput_calc == "a" || userInput_calc == "area")
        {
            cout << "Enter Base: " << endl;
            cin >> uBase;
            cout << "Enter Height: " << endl;
            cin >> uHeight;
            CTriangle triangle(uBase, uHeight); 

            cout << "Area of the Triangle is equal to: " <<triangle.calculateArea() << endl;
        }
        else if (userInput_calc == "b" || userInput_calc == "volume")
        {
            cout << "Enter Base: " << endl;
            cin >> uBase;
            cout << "Enter Height: " << endl;
            cin >> uHeight;
            cout << "Enter Length: " << endl;
            cin >> uLength;

            CTriangle triangle(uBase, uHeight, uLength); 

            cout << "Volume of the Triangle is equal to: " <<triangle.calculateVolume() << endl;
        }
        else
        {
            cout << "Sorry! You have input the wrong value" << endl;
        }
    }

    else if (userInput == "c" || userInput == "square")
    {
        int uSide{};

        cout << "What do you want to calculate? " << endl;
        cout << "a. Area \nb. Volume " << endl;

        cin >> userInput_calc;
        std::transform(userInput_calc.begin(), userInput_calc.end(), userInput_calc.begin(), ::tolower);
        
        cout << "Enter the value  of side: " << endl;
        cin >> uSide;
        CSquare square(uSide);

        if (userInput_calc == "a" || userInput_calc == "area")
        {
            cout << "Area of the Triangle is equal to: " <<square.calculateArea() << endl;
        }
        else if (userInput_calc == "b" || userInput_calc == "volume")
        {
            cout << "Volume of the Triangle is equal to: " <<square.calculateVolume() << endl;
        }
        else
        {
            cout << "Sorry! You have input the wrong value" << endl;
        }
    }

    else if (userInput == "d" || userInput == "rectangle")
    {

        cout << "What do you want to calculate?" << endl;
        cout << "a. Area \nb. Volume" << endl;

        cin >> userInput_calc;
        std::transform(userInput_calc.begin(), userInput_calc.end(), userInput_calc.begin(), ::tolower);

        int uLength{}; 
        int uWidth{};
        int uHeight{};

        if (userInput_calc == "a" || userInput_calc == "area" )
        {
            cout << "Enter the length of the rectangle:  " << endl;
            cin >> uLength;

            cout << "Enter the width of the rectangle: " << endl;
            cin >> uWidth;

            CRectangle rectangle(uLength, uWidth);
            cout << "Area of the rectangle is equal to: " << rectangle.calculateArea() << endl;
        }
        else if (userInput_calc == "b" || userInput_calc == "volume")
        {
            cout << "Enter the length of the rectangle: " << endl;
            cin >> uLength;

            cout << "Enter the width of the rectangle: " << endl;
            cin >> uWidth;

            cout << "Enter the height of the rectangle: " << endl;
            cin >> uHeight;

            CRectangle rectangle(uLength, uWidth, uHeight);
            cout << "Volume of the rectangle is equal to: " << rectangle.calculateVolume() << endl;
        }
        else
        {
            cout << "Sorry! You have input an invalid choice!";
        }
    }

    else
    {
        cout << "Sorry! you have input an invalid choice! " << endl;
    }

    return 0;
}