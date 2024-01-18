#include "game.h"

Game::Game(int value)
{
    maxNumber = value;
}

Game::~Game()
{

}

void Game::play()
{
    srand(time(NULL));
    int randomNumber = rand() % maxNumber+1;

    cout << "Arvaa luku 0-"<<maxNumber<< endl;

    while(playerGuess != randomNumber) {
        numOfGuesses++;
        cin >> playerGuess;
        if(playerGuess < randomNumber) {
            cout << "luku on suurempi" <<endl;
        }
        else if(playerGuess > randomNumber) {
            cout << "luku on pienempi" <<endl;
        }
        else if(playerGuess == randomNumber) {
            printGameResults();
        }
    }

}

void Game::printGameResults()
{
    cout<<"oikea arvaus"<<endl;
    cout<<"sinulla meni "<<numOfGuesses<<" arvausta" <<endl;
}

int Game::getMaxNumber() const
{
    return maxNumber;
}

void Game::setMaxNumber(int newMaxNumber)
{
    maxNumber = newMaxNumber;
}

int Game::getPlayerGuess() const
{
    return playerGuess;
}

void Game::setPlayerGuess(int newPlayerGuess)
{
    playerGuess = newPlayerGuess;
}

int Game::getRandomNumber() const
{
    return randomNumber;
}

void Game::setRandomNumber(int newRandomNumber)
{
    randomNumber = newRandomNumber;
}

int Game::getNumOfGuesses() const
{
    return numOfGuesses;
}

void Game::setNumOfGuesses(int newNumOfGuesses)
{
    numOfGuesses = newNumOfGuesses;
}
