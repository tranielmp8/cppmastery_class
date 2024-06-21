#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;

// super simple guess game
// getting a random number!
int randNum(int num) {
  int x = time(0);
  srand(x);
  num = 1 + rand() % num;
  cout << num << endl;
  return num;
  
}

// EASY, MEDIUM, OR HARD MODE CHOICES
int mode(int level) {
    cout << "Please choose your Game Mode \n";
    cin >> level;
    
    while(level < 1 && level > 3){
    cout << "Please choose your Game Mode \n";
    cout << "1. Easy \n";
    cout << "2. Medium \n";
    cout << "3. Hard \n";
    cin >> level;
  }
  cout << "Your level is: " << level << endl;
  return level;
}

// game mode or mode determines the lives you will have at the start of the game
int totalLives(int lives) {
  cout << "Choose your level \n";
  int x;
  int gameMode = mode(x);
  

  if (gameMode == 1) {
    cout << "You chose Easy Mode! \n";
    cout << "You have a total of 5 lives! \n";
    lives = 5;
  } else if (gameMode == 2) {
      cout << "You chose Medium Mode! \n";
      cout << "You have a total of 4 lives! \n";
      lives = 4;
  } else {
      cout << "You chose Hard Mode! \n";
      cout << "You have a total of 3 lives! \n";
      lives = 3;
  }
  return lives;

}

int main() {
  cout << "Welcome to the Guessing Game!\n";
  int choice;
  int lives = 0;
  bool isPlaying = true;
  int hiddenNum = randNum(10);
  // lives are at 0 until the totalLives function runs and then it changes 
  lives = totalLives(lives);

  while (isPlaying) {
    cout << "Guess a number between 1 - 10: \n";
    --lives;
    cout << lives << " lives remaining \n" << endl;
    if (hiddenNum == choice) {
      cout << "You Win! \n";
      isPlaying = false;
    } else if (lives == 0) {
      cout << "You Lose! \n";
      isPlaying = false;

    }
  }
  cout << "Game Over!";

  return 0;
}