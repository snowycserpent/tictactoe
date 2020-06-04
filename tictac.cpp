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
  if (seven == 'x' && four == 'x' && one == 'x') {
    cout << "congrats! the player won!\n";
    drawboard();
    exit(0);
  }
  if (seven == 'x' && five == 'x' && three == 'x') {
    cout << "congrats! the player won!";
    drawboard();
    exit(0);
  }
  if (nine == 'x' && five == 'x' && one == 'x') {
    cout << "congrats! the player won!";
    drawboard();
    exit(0);
  }
  if (eight == 'x' && five == 'x' && two == 'x') {
    cout << "congrats! the player won!";
    drawboard();
    exit(0);
  }
  if (nine == 'x' && six == 'x' && three == 'x') {
    cout << "congrats! the player won!";
    drawboard();
    exit(0);
  }
  if (seven == 'x' && eight == 'x' && nine == 'x') {
    cout << "congrats! the player won!";
    drawboard();
    exit(0);
  }
  if (four == 'x' && five == 'x' && six == 'x') {
    cout << "congrats! the player won!";
    drawboard();
    exit(0);
  }
  if (two == 'x' && three == 'x' && one == 'x') {
    cout << "congrats! the player won!";
    drawboard();
    exit(0);
  }


  if (seven == 'o' && four == 'o' && one == 'o') {
    cout << "you lose.";
    drawboard();
    exit(0);
  }
  if (seven == 'o' && five == 'o' && three == 'o') {
    cout << "you lose.";
    drawboard();
    exit(0);
  }
  if (nine == 'o' && five == 'o' && one == 'o') {
    cout << "you lose.";
    drawboard();
    exit(0);
  }
  if (eight == 'o' && five == 'o' && two == 'o') {
    cout << "you lose.";
    drawboard();
    exit(0);
  }
  if (nine == 'o' && six == 'o' && three == 'o') {
    cout << "you lose.";
    drawboard();
    exit(0);
  }
  if (seven == 'o' && eight == 'o' && nine == 'o') {
    cout << "you lose.";
    drawboard();
    exit(0);
  }
  if (four == 'o' && five == 'o' && six == 'o') {
    cout << "you lose.";
    drawboard();
    exit(0);
  }
  if (two == 'o' && three == 'o' && one == 'o') {
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
	  cout << endl;
	  i--;
	  continue;
	}
	
      case 6:
	if (six == ' '){  
	six = 'x';
	break;
	}
	else{
	  cout << "number already taken\n";
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
	  cout << endl;
	  i--;
	  continue;
	}
      default:
	cout << "not a number between 1 and 9 \n";
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
