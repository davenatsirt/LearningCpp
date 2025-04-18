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

#define PI	4

using std::cout;
using std::cin;
using std::endl;

//Function to calculate area of circle
int area_of_circle (int radius);

//Function to calculate area of triangle
int area_of_triangle (int base, int height);

//Function to calculate area of square
int area_of_square (int side);

//Function to calculate area of rectangle
int area_of_rectangle (int width, int length);

int main ()
{
	std::string userInput;
	cout << "" << endl;
	cout << "a. circle" << endl;
	cout << "b. triangle" << endl;
	cout << "c. square" << endl;
	cout << "d. rectangle" << endl;

	cin >> userInput;

	int area_of_shape{};
	int radius{}, base{}, height{}, width{}, length{};

	if (userInput == "a" || userInput == "circle")
	{
		cout << "Enter the radius of the circle: ";
		cin >> radius;
		area_of_shape = area_of_circle(radius);
		cout << "Area of the circle is: " << area_of_shape << endl;

	}
	else if (userInput == "b" || userInput == "triangle")
	{
		cout << "Enter the base of the triangle: " << endl;
		cin >> base;
		cout << "Enter the height of the triangle: " << endl;
		cin >> height;
		area_of_shape = area_of_triangle(base, height);
		cout << "Area of the triangle is: " << area_of_shape << endl;
	}
	else
	{
		cout << "You have entered an incorrect shape or choice";
	}

	// switch (userInput)
	// {
	// 	case ("a" || "circle"):
	// 	cout << "Enter the radius: " << endl;
	// 	cin >> radius;
	// 	area_of_shape = area_of_circle(radius);
	// 	cout << "Area of circle is: " << area_of_shape << endl;
	// 	break;
	// }	
	return 0;
}

int area_of_circle (int radius)
{
	int area = (PI * radius * radius);
	return area;
}

int area_of_triangle (int base, int height)
{
	int area = (base * height) / 2;
	return area; 
}

int area_of_square (int side)
{
	int area = (side * side);
	return area;
}

int area_of_rectangle (int width, int length)
{
	int area = (width * length);
	return area;
}