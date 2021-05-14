#include <iostream>
#include <stdlib.h>

void PrintIntroduction(int LoopNumber, int WonTimes)
{
    std::cout << "\n\nThis is loop: " << LoopNumber << "\nCurrentDifficulty: " << WonTimes;

    if (LoopNumber > 1)
    {
        std::cout << "\nYou've already won: " << WonTimes << " times.";  
    }
    
    std::cout<< R"(
                             88                                      
                             88                                      
                             88                                      
        ,adPPYba, ,adPPYYba, 88  ,adPPYba,   ,adPPYba,  8b,dPPYba,   
        I8[    "" ""     `Y8 88 a8"     "8a a8"     "8a 88P'   `"8a  
         `"Y8ba,  ,adPPPPP88 88 8b       d8 8b       d8 88       88  
        aa    ]8I 88,    ,88 88 "8a,   ,a8" "8a,   ,a8" 88       88  
        `"YbbdP"' `"8bbdP"Y8 88  `"YbbdP"'   `"YbbdP"'  88       88  
    )";
}

int GuessNumbers(int LoopNumber, int WonTimes) {
    PrintIntroduction(LoopNumber, WonTimes);
    
    // General description
    std::cout << "\nYou're the dumbest person on earth and need to enter the correct code to collect your booze \n";
    std::cout << "Enter the correct code to access the tavern... \n";

    int CodeA = rand() % 10 + (WonTimes * 2);
    int CodeB = rand() % 10 + (WonTimes * 2);
    int CodeC = rand() % 10 + (WonTimes * 2);

    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProd = CodeA * CodeB * CodeC;

    // Print sum and product
    std::cout << "There are 3 numbers in the code";
    std::cout << "\nThe code adds up to: " << CodeSum;
    std::cout << "\nThe code multiply to give: " << CodeProd << std::endl;
    std::cout << CodeA << " " << CodeB << " " << CodeC;

    int PlayerGuessA, PlayerGuessB, PlayerGuessC;
    std::cin >> PlayerGuessA >> PlayerGuessB >> PlayerGuessC;

    int GuessSum = PlayerGuessA + PlayerGuessB + PlayerGuessC;
    int GuessProd = PlayerGuessA * PlayerGuessB * PlayerGuessC;
    bool BoolSum = false;
    bool BoolProd = false;

    if (GuessSum == CodeSum)
    {
        BoolSum = true;
    }

    if (GuessProd == CodeProd)
    {
        BoolProd = true;
    }

    if ( BoolProd && BoolSum )
    {
        std::cout << "Good job boyo! Now to the next level!";
        return 1;
    } else
    {
        std::cout << "You suck ballz, try again!";
        return 0;
    }
}

int main() {
    // Initialize game options
    int CurrentGameLoop = 1;
    int TotalGameLoop = 5;
    int WonTimes = 0;
    
    while ( CurrentGameLoop <= TotalGameLoop )
    {
        int TempDifficulty = WonTimes;
        WonTimes += GuessNumbers(CurrentGameLoop, WonTimes);
        std::cin.clear(); //Clear errors
        std::cin.ignore(); //Discard cin buffer
        if (TempDifficulty < WonTimes)
        {
            CurrentGameLoop++;    
        }

    }

    return 0;
}