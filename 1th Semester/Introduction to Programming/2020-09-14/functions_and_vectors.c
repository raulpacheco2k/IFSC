// Make a program to calculate grade averages. The program must have a function that
// reads 4 notes and stores them in a vector and another function to calculate the average.

#include <stdio.h>

float score();
float average(float sumScore);

int main(void) {
  float nota;
  float averageScore;
  
  nota = score();
  averageScore = average(nota);

  printf("Your average is: %f.", averageScore);
}

float scores(){
  float vectorScore[4] = {0, 0, 0, 0};
  float sumScore;
  int i;

  for (i = 0; i <= 3; i++){
    printf("Enter your test score: ");
    scanf("%f", &vectorScore[i]);
    sumScore += vectorScore[i];
  }

  return sumScore;
}

float average(float sumScore){
  return sumScore / 4;
}