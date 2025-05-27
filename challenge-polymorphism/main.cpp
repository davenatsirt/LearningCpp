#include <iostream>
#include <string>
#include <algorithm>
#include <memory>
#include "circle.hpp"
#include "triangle.hpp"

using std::cout;
using std::endl;
using std::string;
using std::cin;

int main()
{
    string userInput;
    IShape* calculate = nullptr; //Object (pointer to object)

    cout << "Choose a shape \n" << endl;
    cout << "a. Circle" << endl;
    cout << "b. Triangle" << endl;
    cout << "c. Square" << endl;
    cout << "d. Rectangle"  << endl;
    cin >> userInput;

    std::transform(userInput.begin(), userInput.end(), userInput.begin(), ::tolower);

    string calcChoice;

    if (userInput == "a" || userInput == "circle")
    {

        cout << "What do you want to calculate?\n";
        cout << "a. Area\n";
        cout << "b. Perimeter\n";
        cin >> calcChoice;
        
        std::transform(calcChoice.begin(), calcChoice.end(), calcChoice.begin(), ::tolower);
        cout << calcChoice;
        if (calcChoice == "a" || calcChoice == "area")
        {
            int radius;
            cout << "Enter raidus of the circle: ";
            cin >> radius;

            calculate = new CCircle(radius);
        }
        else if (calcChoice == "b" || calcChoice == "perimeter")
        {
            cout << "\nThere is no perimeter for Circle";
            return 0;
        }
    }
    else if (userInput == "b" || userInput == "triangle")
    {

        cout << "What do you want to calculate?\n";
        cout << "a. Area\n";
        cout << "b. Perimeter\n";
        cin >> calcChoice;
        
        std::transform(calcChoice.begin(), calcChoice.end(), calcChoice.begin(), ::tolower);
        cout << calcChoice;
        if (calcChoice == "a" || calcChoice == "area")
        {
            int base, height;
            cout << "Enter the base of the triangle: ";
            cin >> base;
            cout << "\nEnter the height of the triangle: ";
            cin >> height;

            calculate = new CTriangle(base, height);
        }
        else if (calcChoice == "b" || calcChoice == "perimeter")
        {
            int base, side1, side2;
            cout << "Enter the 1st side of the Triangle: ";
            cin >> side1;
            
            cout << "\nEnter the 2nd side of the Triangle: ";
            cin >> side2;
            
            
            cout << "\nEnter the base of the Triangle: ";
            cin >> base;
            calculate = new CTriangle(base, side1, side2);
        }
    }
    else
    {
        cout << "Invalid shape!\n";
        return 1;
    }

    if (calcChoice == "a" || calcChoice == "area")
    {
        cout << "The area is equal to: " << calculate->calculateArea() << std::endl;
    }
    else if (calcChoice == "b" || calcChoice == "perimeter" )
    {
        cout << "The perimeter is equal to: " << calculate->calculatePerimeter() << std::endl; 
    }
    else{
        cout << "You have input an invalid choice!!";
    }

    delete calculate;
    return 0;
}
