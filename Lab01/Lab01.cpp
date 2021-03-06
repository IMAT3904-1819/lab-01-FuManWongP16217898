// Lab01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <ctime>
#include <string>
int main()
{
	srand(time(NULL));
	int guesses = 8;
    std::cout << "Guess the number between 1 to 100!\n"; 
	int random_number = (rand() % 100) + 1;
	bool correct_answer = false;
	std::cout << random_number << std::endl;
	while (guesses !=0)
	{
		int user_answer;
		std::cin >> user_answer;
		if (!(user_answer == random_number))
		{	std::cout << "Wrong answer! Please try again." << guesses << " chances left." << std::endl;
			if (user_answer> random_number)
			{
				std::cout << "Lower" << std::endl;
			}
			else
			{
				std::cout << "Higher" << std::endl;
			}
			guesses--;

		}
		else
		{		
			std::cout << "Correct!\n";
			correct_answer = true;
			std::cout << "Would you like to play again? (Y/N)" << std::endl;
			std::string tryagain;
			std::cin >> tryagain;
			if (tryagain == "Y")
			{		
				random_number = (rand() % 100) + 1;
				guesses = 5;
				std::cout << "Guess the number between 1 to 100!\n";
				std::cout << random_number << std::endl;
			}
			if (tryagain == "N")
			{
				break;
			}

		}
	}
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
