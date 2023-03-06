#include <iostream>
#include <stdio.h>
#include <string.h>

//Hello Welcome to my Project for a trivia game/quiz. =)
int main() {
  //I made my quiz about the math questions.
  printf("Welcome to Trivia Quiz! In this quiz, you'll be able to answer a few maths questions.\n\n"); //This line represents the welcome =)
 
  char Yes[] = "Yes"; 
  char userAnswer[4]; 
  while (true) {
  printf("Are you ready?\n(Yes/No)\n"); //In this line this user answer with "yes" or "no" based on functions.
  scanf("%s", userAnswer);
  
  if(strcmp(userAnswer, Yes) == 0) {
      printf("Let's start the quiz!\n");
      break; // exit the loop if the user enters "Yes" or "yes"
  } 
  else {
      printf("How would you see the questions if you answer with 'No'?.\nif you wish to view the questions, please enter 'Yes'. =)\n"); //This only works if the person doesn't write "Yes".
  }
}
  
  printf("\n\n");
 
  int score = 0; //Added this integer to score the person score based on the question.
  
  //Question Number 1
  printf("Question 1\n");
  printf("What is 60+9?\n");
  
  char answer1[] = "69"; //That's only the correct answer.
  char userAnswer1[3];
  scanf("%s", userAnswer1);
  if(strcmp(userAnswer1, answer1) ==0){
    printf("Correct!\n");
    score++;
  } else {
    printf("Wrong the correct answer is 69\n");
  }
  printf("Your score %d out 6\n", score);

  printf("\n\n");

  //Question Number 2
  
  printf("Question 2\n");
  printf("Solve - 15 + (-5x) = 0\n");
  
  char answer2[] = "-3";
  char userAnswer2[3];
  scanf("%s", userAnswer2);
  if(strcmp(userAnswer2, answer2) == 0){
    printf("Correct!\n");
    score++;
  } else {
    printf("Wrong the correct answer is -3\n");
  }
  printf("Your score %d out 6\n", score);
  printf("\n\n");

//Question Number 3
  
  printf("Question 3\n");
  printf("Look at this series: 22, 21, 23, 22, 24, 23, … What number should come next?\n");
  printf("\nA.21\nB.22\nC.23\nD.24\nE.25\n");
  char answer3[] = "E";
  char userAnswer3[3];
  scanf("%s", userAnswer3);
  if(strcmp(userAnswer3, answer3) == 0){
    printf("Correct!\n");
    score++;
  } else {
    printf("Wrong the correct answer is E \n");
  }
  printf("Your score %d out 6\n", score);
  printf("\n\n");

//Question Number 4
  printf("Question 4\n");
  printf("How many feet are in a mile?\n");
  char answer4[] = "5280";
  char userAnswer4[3];
  scanf("%s", userAnswer4);
  if(strcmp(userAnswer4, answer4) == 0){
    printf("Correct!\n");
    score++;
  } else {
    printf("Wrong the correct answer is 5280 \n");
  }
  printf("Your score %d out 6\n",score);
  printf("\n\n");

//Question Number 5
  printf("Question 5\n");
  printf("A ship anchored in a port has a ladder which hangs over the side. The length of the ladder is 200cm, the distance between each rung is 20cm and the bottom rung touches the water.\nThe tide rises at a rate of 10cm an hour. When will the water reach the fifth rung?\n");
  printf("A.20cm\nB.200cm\nC.Never\nD.I don’t know\n");
  char answer5[] = "C";
  char userAnswer5[3];
  scanf("%s", userAnswer5);
  if(strcmp(userAnswer5, answer5) == 0){
    printf("Correct!\n");
    score++;
  } else {
    printf("Wrong the correct answer is C \n");
  }
  printf("Your score %d out 6\n", score);
  printf("\n\n");

//Question Number 6
  printf("Question 6\n");
  printf("What is the integral of Integral cos(x)/(x^2+1)?\n");
  printf("A.pi over 2\nB.ln(pi over 2)\nC.ln\nD.I don't know\n");
  char answer6[] = "A";
  char userAnswer6[3];
  scanf("%s", userAnswer6);
  if(strcmp(userAnswer6, answer6) == 0){
    printf("Correct!\n");
    score++;
  } else {
    printf("Wrong the correct answer is A \n");
  }
  printf("Your score %d out 6.\n", score);
  printf("\n\n");

//Here's the final

  int finalScore = (int)(score / 6.0 * 100); 
  int correct = score;
  int wrong = 6 - score;
  printf("\nYou got %d right and %d wrong. your score is %d.\n", correct, wrong, finalScore);
  if (finalScore >= 80) {
    printf("Congratulations!🥳 You passed! Great job!\n");
  } else if (finalScore >= 50) {
    printf("You were close. Keep practicing!🔥\n");
  } else {
    printf("Sorry, you failed. Keep studying and practicing.🫡\n");
  }

}
