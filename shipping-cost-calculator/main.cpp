#include <iostream>

int main()
{
	const int allowed{10};
	const double cost{2.50};
	int length{}, width{}, height{};

	std::cout << "Enter length of the package: " << std::endl;
	std::cin >> length;

	std::cout << "Enter the width of the package: " << std::endl;
	std::cin >> width;

	std::cout << "Enter the height of the package: " << std::endl;
	std::cin >> height;

	if (length <= allowed && width <= allowed && height <= allowed)
	{
		int volume = (length * width * height);
		double total_cost{};
		if(volume >= 100 && volume <= 500)
		{
			total_cost = cost + (cost * .10);
			std:: cout << "The total cost is: $" << total_cost << std::endl;
		}
		else if (volume > 500)
		{
			total_cost = cost + (cost * .25);
			std::cout << "The total cost is: $" << total_cost << std::endl;
		}
		else
		{
			std::cout << "The total cost is: $" << cost << std::endl;
		}
	}
	else
	{
		std::cout << "I am sorry, the product cannot be shipped!!" << std::endl;
	}


}
