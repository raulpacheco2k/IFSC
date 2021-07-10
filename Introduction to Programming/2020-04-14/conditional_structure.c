// Make a program that reads the score of a soccer game between TimeA and TimeB, for example.
// The program should inform who won the game. In case of a tie, it should ask which team will start taking penalties.

#include <stdio.h>

void main(void) {

  int tubarao, hercilioLuz, penalte;
  printf("How many goals did the Tubarao team score? ");
  scanf("%d", & tubarao);
  printf("\nHow many goals did Hercilio Luz team score? ");
  scanf("%d", & hercilioLuz);
  printf("\nThe tubarao team scored %d points and the Hercilio Luz team scored %d points.", tubarao, hercilioLuz);

  if (tubarao == hercilioLuz) {
    printf("\nThe teams have scored the same amount of goals, so it is a draw. Choose who will start in the penalty shootout.");
    printf("\nType (1) for Shark, or");
    printf("\nType ( 2 ) for Hercilio Luz.");
    printf("\nYour answer: ");
    scanf("%d", & penalte);
    while (penalte != 1 && penalte != 2) {
      printf("\nInconsistent answers, please enter a valid value.");
      printf("\nYour answer: ");
      scanf("%d", & penalte);
    }
    if (penalte == 1) {
      printf("\nTubarao's team will start taking penalties.");
    } else {
      printf("\nHercilio Luz's team will start taking penalties.");
    }
  } else {
    if (tubarao > hercilioLuz) {
      printf("\nThe shark team won.");
    } else {
      printf("\nThe Hercilioz Luz's team won.");
    }
  }
}