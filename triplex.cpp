#include <iostream>

bool GuessNumbers() {
    return true;
}

int main() {
    // General description
    std::cout << "You're the dumbest person on earth and need to enter the correct code to collect your booze \n";
    std::cout << "Enter the correct code to access the tavern... \n";

    int CodeA = 4;
    int CodeB = 3;
    int CodeC = 2;

    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProd = CodeA * CodeB * CodeC;

    // Print sum and product
    std::cout << "There are 3 numbers in the code";
    std::cout << "\nThe code adds up to: " << CodeSum;
    std::cout << "\nThe code multiply to give: " << CodeProd;

    int PlayerGuessA, PlayerGuessB, PlayerGuessC;
    std::cin >> PlayerGuessA >> PlayerGuessB >> PlayerGuessC;

    int GuessSum = PlayerGuessA + PlayerGuessB + PlayerGuessC;
    int GuessProd = PlayerGuessA * PlayerGuessB * PlayerGuessC;
    bool BoolSum = false;
    bool BoolProd = false;

    if (GuessSum == CodeSum)
    {
        std::cout << "GuessSum is OK, good job! \n";
        BoolSum = true;
    }

    if (GuessProd == CodeProd)
    {
        std::cout << "GuessProd is OK, good job! \n";
        BoolProd = true;
    }

    if ( BoolProd && BoolSum )
    {
        std::cout << "Good job boyo! Now to the next level!";
    } else
    {
        std::cout << "You suck ballz, try again!";
    }
    

    return 0;
}