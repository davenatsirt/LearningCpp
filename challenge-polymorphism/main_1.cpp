/*
    Challenge - Polymorphism topic
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <memory>

#define PI 4

using std::cout;
using std::endl;
using std::cin;
using std::string;

// header
class CCircle : public IShape
{
    private:
        int radius{}, height{};
    
    public:
        //Set constructor for the area of circle
        // CCircle(int r) :
        // radius(r),
        // height(0){}

        // CCircle(int r, int h) : 
        // radius(r),
        // height(h) {}

        // int calculateArea() override {
        //     return (PI * radius * radius);
        // }

        // int calculateVolume() override {
        //     return (PI * radius * height);
        // }

        // int calculate() override {
        //     if (height == 0)
        //     {
        //         return calculateArea();
        //     }

        //     return calculateVolume();
        // }
        CCircle(int r);
        CCircle(int r, int h);

        int calculateArea() override;
        int calculateVolume() override;
        int calculate() override;

};

// source
#include "circle.h"

CCircle::Circle(int r) :
    radius(r),
    height(0)
{
}

CCircle::

CCircle::~CCircle()

int CCircle::calculateArea(void)
{
    
}

int main()
{
    string userInput{};
    std::unique_ptr<IShape>pshape = nullptr;

    cout << "Hello, Enter the shape of your choice: " << endl;
    cout << "a. Circle" << endl;

    cin >> userInput;

    std::transform(userInput.begin(), userInput.end(), userInput.begin(), ::tolower);
    if (userInput== "a" || userInput== "circle")
    {
        string userInput_calc{};
        int uRadius{};
        int uHeight{};

        cout << "What do you want to calculate?" << endl;
        cout << "a. Area\nb. Volume" << endl;
        cin >> userInput_calc;

        std::transform(userInput_calc.begin(), userInput_calc.end(), userInput_calc.begin(), ::tolower);
        if (userInput_calc == "a" || userInput_calc == "area")
        {
            cout << "Enter radius of the circle: ";
            cin >> uRadius;

            //CCircle *pCircle = new CCircle(uRadius);
          //  pshape = pCircle;
        }
        else if (userInput_calc == "b" || userInput_calc == "volume")
        {
            cout << "Enter radius: " << endl;
            cin >> uRadius; 
            cout << "Enter Height: " << endl;
            cin >> uHeight;

            std::unique_ptr<CCircle>pCircle = std::make_unique<CCircle>(uRadius, uHeight);
 //           CCircle  *pCircle = new CCircle(uRadius, uHeight);
            pshape = std::move(pCircle);
        }
        else
        {
            //Do nothing
        }

    }
    else
    {
        cout << "You have input an invalid value!!!" << endl;
    }
    
    cout << "Calculated " << userInput_calc << " is equal to: "  << pshape->calculate();
}