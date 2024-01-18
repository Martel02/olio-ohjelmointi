#include <iostream>
#include <cstdlib>
#include <ctime>

#ifndef GAME_H
#define GAME_H

using namespace std;

class Game
{
public:
    Game(int value);
    ~Game();
    void play();

    int getPlayerGuess() const;
    void setPlayerGuess(int newPlayerGuess);

    int getMaxNumber() const;
    void setMaxNumber(int newMaxNumber);

    int getRandomNumber() const;
    void setRandomNumber(int newRandomNumber);

    int getNumOfGuesses() const;
    void setNumOfGuesses(int newNumOfGuesses);

private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;
    void printGameResults();
protected:

};

#endif // GAME_H
