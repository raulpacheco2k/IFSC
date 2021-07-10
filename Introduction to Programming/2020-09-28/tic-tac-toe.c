// Implement a tic-tac-toe game using matrices and functions
// Requirements:
// 1- The "board" of the tic-tac-toe game must be drawn on the screen.
// 2- The game must be played by two people.
// 3 - The game must allow each player to indicate a position on the "board" in his turn.
// 4 - Every time a move is made, the updated "board" should be presented
// 5 - The program should be able to recognize a win or a draw.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tray(char tray[5][5]);
int insertMove(int move, char tray[5][5], int jogador);

int validVictory(char tray[5][5]);
int validVictoryX(char tray[5][5]);
int validVictoryO(char tray[5][5]);

void changePlayer();

char tray[5][5]={{'1','|','2','|','3'},
                      {'4','|','5','|','6'},
                      {'7','|','8','|','9'}};

int jogador = 0;

int main(void){
  int move;
  int insertResult;

  printf("Player X begins \n\n");

  tray(tray);

  int i=0;

  while(i<9){

    printf("\n");
    printf("Type the desired position :");
    scanf("%i", &move);

    if(jogador == 0){ 
      jogador = 1;
    }

    if(move >= 1 && move <= 9){
      insertResult = insertMove(move, tray, jogador);
      if(insertResult){
        i++;
      }
    }else{
      printf("The possible choices are only from 1 to 9.");
      continue;
    }

    printf("\n");

    tray(tray);

    if(i >= 5 && validVictory(tray) == 1){
      break;
    }

    if(i == 9){
      printf("Draw!");
    }

  }

}

void trocaJogador(){
  jogador = jogador == 1 ? 2 : 1;
  printf("Next to play: player %c", jogador == 1 ? 'X' : 'O');
}

void tray(char tray[5][5]){

  for(int m = 0;m<3;m++){
    for(int n=0;n<5;n++){
        printf("%c", tray[m][n]);
    }
    printf("\n");
  }

}

int insertMove(int move, char tray[5][5], int jogador){
  int resultado = 0;
  if(move==1){
    if(tray[0][0]=='1'){
      tray[0][0] = jogador == 1 ? 'X' : 'O';
      resultado = 1;
    }else{
      printf("\nThis house is already occupied \n ");
    }
  }

  if(move==2){
    if(tray[0][2]=='2'){
      tray[0][2]= jogador == 1 ? 'X' : 'O';
      resultado = 1;
    }else{
      printf(" \nThis house is already occupied \n ");
    }
  }

  if(move==3){
    if(tray[0][4]=='3'){
      tray[0][4]= jogador == 1 ? 'X' : 'O';
      resultado = 1;
    }else{
      printf(" \nThis house is already occupied \n ");
    }
  }

  if(move==4){
    if(tray[1][0]=='4'){
      tray[1][0]= jogador == 1 ? 'X' : 'O';
      resultado = 1;
    }else{
      printf(" \nThis house is already occupied \n ");
    }
  }

  if(move==5){
    if(tray[1][2]=='5'){
      tray[1][2]= jogador == 1 ? 'X' : 'O';
      resultado = 1;
    }else{
      printf(" \nThis house is already occupied \n ");
    }
  }

  if(move==6){
    if(tray[1][4]=='6'){
      tray[1][4]= jogador == 1 ? 'X' : 'O';
      resultado = 1;
    }else{
      printf(" \nThis house is already occupied \n ");
    }
  }

  if(move==7){
    if(tray[2][0]=='7'){
      tray[2][0]= jogador == 1 ? 'X' : 'O';
      resultado = 1;
    }else{
      printf(" \nThis house is already occupied \n ");
    }
  }

  if(move==8){
    if(tray[2][2]=='8'){
      tray[2][2]= jogador == 1 ? 'X' : 'O';
      resultado = 1;
    }else{
      printf(" \nThis house is already occupied \n ");
    }
  }

  if(move==9){
    if(tray[2][4]=='9'){
      tray[2][4]= jogador == 1 ? 'X' : 'O';
      resultado = 1;
    }else{
      printf(" \nThis house is already occupied \n ");
    }
  }

  if(resultado == 1){
    changePlayer();
  }

  return resultado;

}

int validVictory(char tray[5][5]){

  int resultX, resultO;

  resultX = validVictoryX(tray);
  resultO = validVictoryO(tray);

  return resultX == 1 || resultO == 1 ? 1 : 0;
}

int validVictoryX(char tray[5][5]){

  int result = 0;

  if((tray[0][0]=='X')&&(tray[0][2]=='X')&&(tray[0][4])=='X'){
    printf("\n");
    printf("The winner is the player X");
    printf("\n");
    result = 1;
  }else if((tray[1][0]=='X')&&(tray[1][2]=='X')&&(tray[1][4])=='X'){
      printf("\n");
      printf("The winner is the player X");
      printf("\n");
      result = 1;
  }else if((tray[2][0]=='X')&&(tray[2][2]=='X')&&(tray[2][4])=='X'){
      printf("\n");
      printf("The winner is the player X");
      printf("\n");
      result = 1;
  }else if((tray[0][0]=='X')&&(tray[1][0]=='X')&&(tray[2][0])=='X'){
      printf("\n");
      printf("The winner is the player X");
      printf("\n");
      result = 1;
  }else if((tray[0][2]=='X')&&(tray[1][2]=='X')&&(tray[2][2])=='X'){
      printf("\n");
      printf("The winner is the player X");
      printf("\n");
      result = 1;
  }else if((tray[0][4]=='X')&&(tray[1][4]=='X')&&(tray[2][4])=='X'){
      printf("\n");
      printf("The winner is the player X");
      printf("\n");
      result = 1;
  }else if((tray[0][0]=='X')&&(tray[1][2]=='X')&&(tray[2][4])=='X'){
      printf("\n");
      printf("The winner is the player X");
      printf("\n");
      result = 1;
  }else if((tray[0][4]=='X')&&(tray[1][2]=='X')&&(tray[2][0])=='X'){
      printf("\n");
      printf("The winner is the player X");
      printf("\n");
      result = 1;
  }

  return result;
}

int validVictoryO(char tray[5][5]){

  int result = 0;

  if((tray[0][0]=='O')&&(tray[0][2]=='O')&&(tray[0][4])=='O'){
      printf("\n");
      printf("The winner is the player O");
      printf("\n");
      result = 1;
  }else if((tray[1][0]=='O')&&(tray[1][2]=='O')&&(tray[1][4])=='O'){
      printf("\n");
      printf("The winner is the player O");
      printf("\n");
      result = 1;
  }else if((tray[2][0]=='O')&&(tray[2][2]=='O')&&(tray[2][4])=='O'){
      printf("\n");
      printf("The winner is the player O");
      printf("\n");
      result = 1;
  }else if((tray[0][0]=='O')&&(tray[1][0]=='O')&&(tray[2][0])=='O'){
      printf("\n");
      printf("The winner is the player O");
      printf("\n");
      result = 1;
  }else if((tray[0][2]=='O')&&(tray[1][2]=='O')&&(tray[2][2])=='O'){
      printf("\n");
      printf("The winner is the player O");
      printf("\n");
      result = 1;
  }else if((tray[0][4]=='O')&&(tray[1][4]=='O')&&(tray[2][4])=='O'){
      printf("\n");
      printf("The winner is the player O");
      printf("\n");
      result = 1;
  }else if((tray[0][0]=='O')&&(tray[1][2]=='O')&&(tray[2][4])=='O'){
      printf("\n");
      printf("The winner is the player O");
      printf("\n");
      result = 1;
  }else if((tray[0][4]=='O')&&(tray[1][2]=='O')&&(tray[2][0])=='O'){
      printf("\n");
      printf("The winner is the player O");
      printf("\n");
      result = 1;
  }

  return result;
}