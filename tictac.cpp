#include <iostream>
#include <stdlib.h>  
#include <time.h>      

using namespace std;


char seven = ' ';
char eight = ' ';
char nine = ' ';
char four = ' ';
char five = ' ';
char six = ' ';
char one = ' ';
char two = ' ';
char three = ' ';
//tic tac toe game, computer randomly chooses a square after you choose x es , controlled using the numpad
int drawboard () {
  cout << endl;
  cout << endl;
  cout << seven << " | " << eight << " | " << nine << endl;   //  o | o | o god i dont want to draw this every time
  cout << "---------" << endl;                                //  ---------
  cout << four << " | " << five << " | " << six << endl;      //  o | o | o
  cout << "---------" << endl;                                //  ---------
  cout << one << " | " << two << " | " <<  three << endl;     //  o | o | o
  cout << endl;
  cout << endl;
  return 0;
  
}

int checkwin () {
  if (seven == 'x' and four == 'x' and one == 'x') {
    cout << "congrats! the player won!\n";
    drawboard();
    exit(0);
  }
  if (seven == 'x' and five == 'x' and three == 'x') {
    cout << "congrats! the player won!";
    drawboard();
    exit(0);
  }
  if (nine == 'x' and five == 'x' and one == 'x') {
    cout << "congrats! the player won!";
    drawboard();
    exit(0);
  }
  if (eight == 'x' and five == 'x' and two == 'x') {
    cout << "congrats! the player won!";
    drawboard();
    exit(0);
  }
  if (nine == 'x' and six == 'x' and three == 'x') {
    cout << "congrats! the player won!";
    drawboard();
    exit(0);
  }
  if (seven == 'x' and eight == 'x' and nine == 'x') {
    cout << "congrats! the player won!";
    drawboard();
    exit(0);
  }
  if (four == 'x' and five == 'x' and six == 'x') {
    cout << "congrats! the player won!";
    drawboard();
    exit(0);
  }
  if (two == 'x' and three == 'x' and one == 'x') {
    cout << "congrats! the player won!";
    drawboard();
    exit(0);
  }


  if (seven == 'o' and four == 'o' and one == 'o') {
    cout << "you lose.";
    drawboard();
    exit(0);
  }
  if (seven == 'o' and five == 'o' and three == 'o') {
    cout << "you lose.";
    drawboard();
    exit(0);
  }
  if (nine == 'o' and five == 'o' and one == 'o') {
    cout << "you lose.";
    drawboard();
    exit(0);
  }
  if (eight == 'o' and five == 'o' and two == 'o') {
    cout << "you lose.";
    drawboard();
    exit(0);
  }
  if (nine == 'o' and six == 'o' and three == 'o') {
    cout << "you lose.";
    drawboard();
    exit(0);
  }
  if (seven == 'o' and eight == 'o' and nine == 'o') {
    cout << "you lose.";
    drawboard();
    exit(0);
  }
  if (four == 'o' and five == 'o' and six == 'o') {
    cout << "you lose.";
    drawboard();
    exit(0);
  }
  if (two == 'o' and three == 'o' and one == 'o') {
    cout << "you lose.";
    drawboard();
    exit(0);
    
  }
  return 0;
}



int main () {
  int choice;
  int playerchoice;

  cout << "TIC TAC TOE\n";

  for (int i = 0; i < 10; i++) {
    srand (time(0));
    choice = rand() % 9 + 1;
    
    if (i % 2 == 0){
      drawboard();
      cout << "where will you place your x? :  ";  //copy this if statement and change the modulo == to 1 instead of 0. also change "x" to "o"
      cin >> playerchoice;

      
      switch (playerchoice) {
      case 1 :
	if (one == ' '){
	one = 'x';
	break;
	}
	else{
	  cout << "number already taken\n";
	  cout << "please enter a new space: ";
	  cin >> playerchoice;
	  cout << endl;
	  i--;
	  continue;
	}
	
      case 2:
	if (two == ' '){
	two = 'x';
	break;
	}
	else{
	  cout << "number already taken\n";
	  cout << "please enter a new space: ";
	  cin >> playerchoice;
	  cout << endl;
	  i--;
	  continue;
	}
	
      case 3:
	if (three == ' '){
	three = 'x';
	break;
	}
	else{
	  cout << "number already taken\n";
	  cout << "please enter a new space: ";
	  cin >> playerchoice;
	  cout << endl;
	  i--;
	  continue;
	}
	
      case 4:
	if (four == ' '){
	four = 'x';
	break;
	}
	else{
	  cout << "number already taken\n";
	  cout << "please enter a new space: ";
	  cin >> playerchoice;
	  cout << endl;
	  i--;
	  continue;
	}
	
      case 5:
	if (five == ' '){
	five = 'x';
	break;
	}
	else{
	  cout << "number already taken\n";
	  cout << "please enter a new space: ";
	  cin >> playerchoice;
	  cout << endl;
	  i--;
	  continue;
	}
	
      case 6:
	if (six == ' '){  //TODO - add a CONTINUE to the default of the switch statement so it loops back upon itself
	                //(and probably an else statement too at the end of everything)
	six = 'x';
	break;
	}
	else{
	  cout << "number already taken\n";
	  cout << "please enter a new space: ";
	  cin >> playerchoice;
	  cout << endl;
	  i--;
	  continue;
	}
	
      case 7:
	if (seven == ' ') {
	seven = 'x';
	break;
	}
	else{
	  cout << "number already taken\n";
	  cout << "please enter a new space: ";
	  cin >> playerchoice;
	  cout << endl;
	  i--;
	  continue;
	}
	
      case 8:
	if (seven == ' ') {
	eight = 'x';
	break;
	}
	else{
	  cout << "number already taken\n";
	  cout << "please enter a new space: ";
	  cin >> playerchoice;
	  cout << endl;
	  i--;
	  continue;
	}
	
      case 9:
	if (nine == ' ') {
	  nine = 'x';
	  break;
	}
	else{
	  cout << "number already taken\n";
	  cout << "please enter a new space: ";
	  cin >> playerchoice;
	  cout << endl;
	  i--;
	  continue;
	}
      default:
	cout << "not a number between 1 and 9 \n";
	cout << "please insert a new number:   ";
	cin >> playerchoice;
	i--;
	continue;
      }
      checkwin();
    }
    

    /////////////////////////////////////////////////////////////////////////////////////////////////////////COMPUTER TURN

    
    if (i % 2 == 1){

      
      switch (choice) {
      case 1 :
	if (one == ' '){
	one = 'o';
	}
	else{
	   srand (time(0));
           choice = rand() % 9 + 1;
	   i--;
	  continue;
	}
	break;
      case 2:
	if (two == ' '){
	two = 'o';
	}
	else{
	  srand (time(0));
          choice = rand() % 9 + 1;
	  i--;
	  continue;
	}
	break;
      case 3:
	if (three == ' '){
	three = 'o';
	}
	else{
	  srand (time(0));
          choice = rand() % 9 + 1;
	  i--;
	  continue;
	}
	break;
      case 4:
	if (four == ' '){
	four = 'o';
	}
	else{
	  srand (time(0));
          choice = rand() % 9 + 1;
	  i--;
	  continue;
	}
	break;
      case 5:
	if (five == ' '){
	five = 'o';
	}
	else{
	  srand (time(0));
          choice = rand() % 9 + 1;
	  i--;
	  continue;
	}
	break;
      case 6:
	if (six == ' '){  
	                
	six = 'o';
	}
	else{
	  srand (time(0));
          choice = rand() % 9 + 1;
	  i--;
	  continue;
	}
	break;
      case 7:
	if (seven == ' ') {
	seven = 'o';
	}
	else{
	  srand (time(0));
          choice = rand() % 9 + 1;
	  i--;
	  continue;
	}
	break;
      case 8:
	if (seven == ' ') {
	eight = 'o';
	}
	else{
	  srand (time(0));
          choice = rand() % 9 + 1;
	  i--;
	  continue;
	}
	break;
      case 9:
	if (nine == ' ') {
	  nine = 'o';
	}
	else{
	  srand (time(0));
          choice = rand() % 9 + 1;
	  i--;
	  continue;
	}
	break;
      default:
	cout << "error, the computer shouldn't have outputted that";
	exit(1);
	break;
      }
      checkwin();
      
    }
    


  


  }
  
  
  
  

  return 0;

}
