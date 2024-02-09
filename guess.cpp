#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() 
{
    srand(static_cast<unsigned int>(time(0)));

    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!!!\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        attempts++;

        if (guess == secretNumber)
		 {
            cout << "Woww...Congratulations! You guessed the correct number in " << attempts << " attempts.\n";
        } 
        
		else 
		{
            cout << (guess < secretNumber ? "Too low! " : "Too high! ") << "Try again.\n";
        }

    } 
	
	while (guess != secretNumber);

    return 0;
}

