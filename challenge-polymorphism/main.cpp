#include <iostream>
#include <string>
#include <algorithm>
#include <memory>
#include "circle.hpp"

using std::cout;
using std::endl;
using std::string;
using std::cin;

int main()
{
    string userInput;
    std::unique_ptr<IShape> calculate = nullptr;

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
        cout << "b. Volume\n";
        cin >> calcChoice;
        
        std::transform(calcChoice.begin(), calcChoice.end(), calcChoice.begin(), ::tolower);
        cout << calcChoice;
        if (calcChoice == "a" || calcChoice == "area")
        {
            int radius;
            cout << "Enter raidus of the circle: ";
            cin >> radius;

            calculate = std::make_unique<CCircle>(radius);
        }
        else if (calcChoice == "b" || calcChoice == "volume")
        {
            cout << "\nThere is no volume for Circle";
            return 0;
        }


    }
    else
    {
        cout << "Invalid shape!\n";
        return 1;
    }

    if (calcChoice == "a" || calcChoice == "area")
    {
        cout << "The area is equal to: " << calculate->calculateArea();
    }
    else if (calcChoice == "b" || calcChoice == "volume" )
    {
        cout << "The volume is equal to: " << calculate->calculateVolume();
    }
    else{
        cout << "You have input an invalid choice!!";
    }

    return 0;
}
