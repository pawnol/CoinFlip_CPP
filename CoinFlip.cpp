/*
Coin Flip
Pawelski
3/31/2022
Please follow the instructions on the activity sheet!
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int main()
{
    srand(time(0));
    int coin_flip = rand() % 2;
    std::string user_choice;
    std::cout << "Heads or tails? >> ";
    std::cin >> user_choice;

    // Add an if statement to check if the coin flip is heads (0) and
    // display a message indicating this. In addition, add an else clause
    // to the if statement to display a message indicating the flip was
    // tails (1).

    if ((coin_flip == 0 && user_choice == "heads") 
        || (coin_flip == 1 && user_choice == "tails"))
    {
        std::cout << "You won the coin flip!\n";
    }
    // Add an else clause so that the program displays a message to
    // tell the user they lost the coin flip.
    return 0;
}
