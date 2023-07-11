#include <iostream>

int GetDigit(const int number);
int SumOddDigit(const std::string CardNumber);
int SumEvenDigit(const std::string CardNumber);


int main()
{                                                                                    
	std::string CardNumber;
    int result = 0;
    std::cout << "***************************\n";
    std::cout << "Enter a credit card number: \n";
    std::cout << "***************************\n";
    std::cin >> CardNumber;
    

    result = SumOddDigit(CardNumber) + SumEvenDigit(CardNumber);

    if (result % 10 == 0){
        std::cout << "***************************\n";
        std::cout << "*         RESULST         *\n";
        std::cout << "* "<<CardNumber << " is valid *\n";
        std::cout << "***************************\n";
    }
    else{
        std::cout << "***************************\n";
        std::cout << "*         RESULST         *\n";
        std::cout << "* "<<CardNumber << " is not valid *\n";
        std::cout << "***************************\n";
    }

	return 0;
}

int GetDigit(const int number){

    return number % 10 + (number / 10 % 10);
}
int SumOddDigit(const std::string CardNumber){

    int sum = 0;
    for (int i = CardNumber.size() - 1; i >= 0; i-=2)
    {
        sum += CardNumber[i] - '0';
    }

    return sum;
}
int SumEvenDigit(const std::string CardNumber){

    int sum = 0;
    for (int i = CardNumber.size() - 2; i >= 0; i-=2)
    {
        sum += GetDigit((CardNumber[i] - '0')* 2);
    }
    
    return sum;
}
