#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
	int a;
	int x;
	int y;
	int z;
	cout << "Welcome to Rock Paper Scissors Lizard Spock, The Game!" << endl;
	cout << "You will play the computer, in a fight to the DEATH!" << endl;
	system("PAUSE");
	//Start Program
	for (z = 0; z != 1;){
		a = 0;
		x = 0;
		y = rand() % 5 + 1;
		system("CLS");
		cout << "Choose your character: Rock (1), Paper (2), Scissors (3), Lizard (4), or Spock (5)." << endl;
		cin >> x;

		if (x == 1){
			cout << "You Chose: Rock!" << endl;
			if (y == 1){
				cout << "Computer Chose: Rock!" << endl;
				cout << "It's a tie!  Replay? (1 = yes, 2 = no)" << endl;
				cin >> a;
				if (a == 1){
					z = 0;
				}
				else if (a == 2){
					z = 1;
				};
			}
			else if (y == 2){
				cout << "Computer Chose: Paper!" << endl;
				cout << "Computer Wins!!  Replay? (1 = yes, 2 = no)" << endl;
				cin >> a;
				if (a == 1){
					z = 0;
				}
				else if (a == 2){
					z = 1;
				};
			}
			else if (y == 3){
				cout << "Computer Chose: Scissors!" << endl;
				cout << "You Win!  Replay? (1 = yes, 2 = no)" << endl;
				cin >> a;
				if (a == 1){
					z = 0;
				}
				else if (a == 2){
					z = 1;
				};
			}
			else if (y == 4){
				cout << "Computer Chose: Lizard!" << endl;
				cout << "You Win!  Replay? (1 = yes, 2 = no)" << endl;
				cin >> a;
				if (a == 1){
					z = 0;
				}
				else if (a == 2){
					z = 1;
				};
			}
			else if (y == 5){
				cout << "Computer Chose: Spock!" << endl;
				cout << "Computer Wins!  Replay? (1 = yes, 2 = no)" << endl;
				cin >> a;
				if (a == 1){
					z = 0;
				}
				else if (a == 2){
					z = 1;
				};
			};
			
		}
		else if (x == 2){
			cout << "You Chose: Paper!" << endl;
			if (y == 1){
				cout << "Computer Chose: Rock!" << endl;
				cout << "You Win!  Replay? (1 = yes, 2 = no)" << endl;
				cin >> a;
				if (a == 1){
					z = 0;
				}
				else if (a == 2){
					z = 1;
				};
			}
			else if (y == 2){
				cout << "Computer Chose: Paper!" << endl;
				cout << "Its a Tie!  Replay? (1 = yes, 2 = no)" << endl;
				cin >> a;
				if (a == 1){
					z = 0;
				}
				else if (a == 2){
					z = 1;
				};
			}
			else if (y == 3){
				cout << "Computer Chose: Scissors!" << endl;
				cout << "Computer Wins!  Replay? (1 = yes, 2 = no)" << endl;
				cin >> a;
				if (a == 1){
					z = 0;
				}
				else if (a == 2){
					z = 1;
				};
			}
			else if (y == 4){
				cout << "Computer Chose: Lizard!" << endl;
				cout << "Computer Wins!  Replay? (1 = yes, 2 = no)" << endl;
				cin >> a;
				if (a == 1){
					z = 0;
				}
				else if (a == 2){
					z = 1;
				};
			}
			else if (y == 5){
				cout << "Computer Chose: Spock!" << endl;
				cout << "You Win!  Replay? (1 = yes, 2 = no)" << endl;
				cin >> a;
				if (a == 1){
					z = 0;
				}
				else if (a == 2){
					z = 1;
				};
			};
		}
		else if (x == 3){
			cout << "You Chose: Scissors!" << endl;
			if (y == 1){
				cout << "Computer Chose: Rock!" << endl;
				cout << "Computer Wins!  Replay? (1 = yes, 2 = no)" << endl;
				cin >> a;
				if (a == 1){
					z = 0;
				}
				else if (a == 2){
					z = 1;
				};
			}
			else if (y == 2){
				cout << "Computer Chose: Paper!" << endl;
				cout << "You Win!  Replay? (1 = yes, 2 = no)" << endl;
				cin >> a;
				if (a == 1){
					z = 0;
				}
				else if (a == 2){
					z = 1;
				};
			}
			else if (y == 3){
				cout << "Computer Chose: Scissors!" << endl;
				cout << "Its a Tie!  Replay? (1 = yes, 2 = no)" << endl;
				cin >> a;
				if (a == 1){
					z = 0;
				}
				else if (a == 2){
					z = 1;
				};
			}
			else if (y == 4){
				cout << "Computer Chose: Lizard!" << endl;
				cout << "You Win!  Replay? (1 = yes, 2 = no)" << endl;
				cin >> a;
				if (a == 1){
					z = 0;
				}
				else if (a == 2){
					z = 1;
				};
			}
			else if (y == 5){
				cout << "Computer Chose: Spock!" << endl;
				cout << "Computer Wins!  Replay? (1 = yes, 2 = no)" << endl;
				cin >> a;
				if (a == 1){
					z = 0;
				}
				else if (a == 2){
					z = 1;
				};
			};
		}
		else if (x == 4){
			cout << "You Chose: Lizard!" << endl;
			if (y == 1){
				cout << "Computer Chose: Rock!" << endl;
				cout << "Computer Wins!  Replay? (1 = yes, 2 = no)" << endl;
				cin >> a;
				if (a == 1){
					z = 0;
				}
				else if (a == 2){
					z = 1;
				};
			}
			else if (y == 2){
				cout << "Computer Chose: Paper!" << endl;
				cout << "You Win!  Replay? (1 = yes, 2 = no)" << endl;
				cin >> a;
				if (a == 1){
					z = 0;
				}
				else if (a == 2){
					z = 1;
				};
			}
			else if (y == 3){
				cout << "Computer Chose: Scissors!" << endl;
				cout << "Computer Wins!  Replay? (1 = yes, 2 = no)" << endl;
				cin >> a;
				if (a == 1){
					z = 0;
				}
				else if (a == 2){
					z = 1;
				};
			}
			else if (y == 4){
				cout << "Computer Chose: Lizard!" << endl;
				cout << "Its a Tie!  Replay? (1 = yes, 2 = no)" << endl;
				cin >> a;
				if (a == 1){
					z = 0;
				}
				else if (a == 2){
					z = 1;
				};
			}
			else if (y == 5){
				cout << "Computer Chose: Spock!" << endl;
				cout << "You Win!  Replay? (1 = yes, 2 = no)" << endl;
				cin >> a;
				if (a == 1){
					z = 0;
				}
				else if (a == 2){
					z = 1;
				};
			};
		}

		else if (x == 5){
			cout << "You Chose: Spock!" << endl;
			if (y == 1){
				cout << "Computer Chose: Rock!" << endl;
				cout << "You Win!  Replay? (1 = yes, 2 = no)" << endl;
				cin >> a;
				if (a == 1){
					z = 0;
				}
				else if (a == 2){
					z = 1;
				};
			}
			else if (y == 2){
				cout << "Computer Chose: Paper!" << endl;
				cout << "Computer Wins!  Replay? (1 = yes, 2 = no)" << endl;
				cin >> a;
				if (a == 1){
					z = 0;
				}
				else if (a == 2){
					z = 1;
				};
			}
			else if (y == 3){
				cout << "Computer Chose: Scissors!" << endl;
				cout << "You Win!  Replay? (1 = yes, 2 = no)" << endl;
				cin >> a;
				if (a == 1){
					z = 0;
				}
				else if (a == 2){
					z = 1;
				};
			}
			else if (y == 4){
				cout << "Computer Chose: Lizard!" << endl;
				cout << "Computer Wins!  Replay? (1 = yes, 2 = no)" << endl;
				cin >> a;
				if (a == 1){
					z = 0;
				}
				else if (a == 2){
					z = 1;
				};
			}
			else if (y == 5){
				cout << "Computer Chose: Spock!" << endl;
				cout << "Its a Tie!  Replay? (1 = yes, 2 = no)" << endl;
				cin >> a;
				if (a == 1){
					z = 0;
				}
				else if (a == 2){
					z = 1;
				};
			};
		}
		else{
			cout << "Selection Does Not Exist!" << endl;
			system("PAUSE");
		}
	}
	cout << "Thanks for Playing!" << endl;
	system("PAUSE");
	return 0;
}