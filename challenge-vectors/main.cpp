#include <iostream>
#include <vector>

int main()
{
    //1. Declare 2 vectors
    std::vector<int> vector1;
    std::vector<int> vector2;
    
    //2. Add 10 and 20 using push_back
    vector1.push_back(10);
    vector1.push_back(20);
    //Display elements
    for (int i = 0; i < vector1.size(); ++i)
    {
        std::cout << vector1.at(i) << std::endl;
    }
    //Display vector size
    std::cout << "Size of Vector 1 is: " << vector1.size() << std:: endl;
    
    //3. Add 100 and 200 using push_back
    vector2.push_back(100);
    vector2.push_back(200);
    //Display elements
    for (int ii = 0; ii < vector2.size(); ++ii)
    {
        std::cout << vector2.at(ii) << std::endl;
    }
    //Display Vector size
    std::cout << "Size of Vector 2 is: " << vector2.size() << std::endl;
    
    //Declare a 2D vector
    std::vector<std::vector<int>> vector_2d;
    
    //Add vector 1 and 2 to vector_2d using push_back
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    //7. Display the elements in vector_2d using at() method
    std::cout << "vector_2d elements: " << std::endl;
    //outside for loop to display the rows
    for (size_t i = 0; i < vector_2d.size(); i++) 
    {
        //inside for loop to display the column
        for (size_t j = 0; j < vector_2d.at(i).size(); j++) 
        {
            std::cout << vector_2d.at(i).at(j) << " ";
        }
        //to print it in new line
        std::cout << std::endl;
    }
    
    //8. Change the vector1.at(0) to 1000
    vector1.at(0) = 1000;
    //9. Display vector_2d
    for (size_t i=0; i<vector_2d.size(); ++i)
    {
        for (size_t j = 0; j < vector_2d.at(i).size(); ++j)
        {
            std::cout << vector_2d.at(i).at(j) << " ";
        }
        std::cout << std::endl;
    }
    
    std::cout << "10. Display the elements in vector 1: " << std::endl;
    
    for (size_t i = 0; i < vector1.size(); ++i)
    {
        std::cout << vector1.at(i) << " ";
    }
        
    return 0;
    
}