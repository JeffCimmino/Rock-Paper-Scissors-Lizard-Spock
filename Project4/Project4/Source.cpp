#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
	int x;
	int y = rand() % 5 + 1;
	if (y == 1){
		string n = "Rock";
	}
	else if (y == 2){
		string n = "Paper";
	}
	else if (y == 3){
		string n = "Scissors";
	}
	else if (y == 4){
		string n = "Lizard";
	}
	else if (y == 5){
		string n = "Spock"
	}
	//Start Program
	for (z = 0; z != 1;){

		cout << "Welcome to Rock Paper Scissors Lizard Spock, The Game!";
		cout << "You will play the computer, in a fight to the DEATH!";
		system("PAUSE");
		cout << "Choose your character: Rock (1), Paper (2), Scissors (3), Lizard (4), or Spock (5).";
		cin >> x;

		if (x == 1){
			cout << "You Chose: Rock!";
			cout << "Computer Chose:" << y << "!"
		}
		else if (x == 2){
			cout << "You Chose: Paper!";
		}
		else if (x == 3){
			cout << "You Chose: Scissors!";
		}
		else if (x == 4){
			cout << "You Chose: Lizard!";
		}

		else if (x == 5){
			cout << "You Chose: Spock!";
		}
		else{
			cout << "Selection Does Not Exist!";
		}
	}
}