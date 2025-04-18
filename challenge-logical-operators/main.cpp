#include <iostream>

int main()
{
    const int kwenta{50};
    const int bente{20};
    const int dyes{10};
    const int singko{5};
    const int peso{1};
    
    int userInput{0};
    
    std::cout << "Enter amount in Peso:  " << std::endl;
    std:: cin >> userInput;
    
    int rBalance{}, fKwenta{}, fBente{}, fDyes{}, fSingko{},fPeso{};
     
    fKwenta = userInput / kwenta;
    rBalance = userInput % kwenta;
    
    fBente = rBalance / bente;
    rBalance %= bente;
    
    fDyes = rBalance / dyes;
    rBalance %= dyes;
    
    fSingko = rBalance / singko;
    rBalance %= singko;
    
    fPeso = rBalance;
    
    std::cout << "Fifty pesos: " << fKwenta << std::endl;
    std::cout << "Twenty pesos:  " << fBente << std::endl;
    std::cout << "Ten pesos: " << fDyes << std::endl;
    std::cout << "Five pesos: " << fSingko << std::endl;
    std::cout << "One peso: " << fPeso << std::endl;
    
    return 0;
}