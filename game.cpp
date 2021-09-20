//This program will generate a number between 0 and 100. The user will guess a number.

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
  srand(time(NULL));
  bool play = true;

  //play the game until player answers no
  while(play == true)
    {
      int number = rand() % 101; //the number that the player is trying to guess
      int guess = 200; //the number guessed by the player
      int guessNum = 0; //number of guesses
      //cout << number;
      
      //checks if the guess is greater than, less than, or equal to the number
      cout << "Guess a number: ";
      while(guess != number)
	{
	  guessNum++;
	  cin >> guess;
	  if
	  
	  if(guess < number)
	    {
	      cout << "Your guess is too low. Guess again: ";
	    }
	  else if(guess > number)
	    {
	      cout << "Your guess is too high. Guess again: ";
	    } 
	}

      //displays end information and asks if the player wants to play again
      cout << "Your guess is correct. Total guesses:" << guessNum << endl << "Play again? (y/n)";
      char in;
      cin >> in;
      if(in == 'n')
	{
	  cout << "Game over.";
          play = false;
	}
      else if(in != 'y')
	{
	  cout << "Enter y or n.";
	}
        
    }
}
