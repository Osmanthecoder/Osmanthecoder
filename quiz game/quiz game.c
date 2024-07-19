#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to hold quiz questions and answers
struct Question {
    char question[256];
    char options[4][100];
    char correctOption;
};

// Function prototypes
void displayQuestion(struct Question q, int questionNumber);
char getAnswer();
void checkAnswer(char userAnswer, char correctAnswer, int* score);

int main() {
    // Array of quiz questions
    struct Question quiz[] = {
        {"What is the capital of Japan?", {"A. Seoul", "B. Tokyo", "C. Beijing", "D. Bangkok"}, 'B'},
        {"Who wrote 'To Kill a Mockingbird'?", {"A. Harper Lee", "B. J.K. Rowling", "C. Ernest Hemingway", "D. Mark Twain"}, 'A'},
        {"What is the chemical symbol for gold?", {"A. Au", "B. Ag", "C. Pb", "D. Fe"}, 'A'}
    };

    int totalQuestions = sizeof(quiz) / sizeof(quiz[0]);
    int score = 0;

    printf("Welcome to the General Knowledge Quiz!\n\n");

    for (int i = 0; i < totalQuestions; i++) {
        displayQuestion(quiz[i], i + 1);
        char userAnswer = getAnswer();
        checkAnswer(userAnswer, quiz[i].correctOption, &score);
    }

    printf("\nQuiz Over! Your Score: %d out of %d\n", score, totalQuestions);

    return 0;
}

// Function to display a question and its options
void displayQuestion(struct Question q, int questionNumber) {
    printf("Question %d: %s\n", questionNumber, q.question);
    for (int i = 0; i < 4; i++) {
        printf("%s\n", q.options[i]);
    }
    printf("Your answer: ");
}

// Function to get the user's answer
char getAnswer() {
    char answer;
    scanf(" %c", &answer);
    return answer;
}

// Function to check the user's answer and update the score
void checkAnswer(char userAnswer, char correctAnswer, int* score) {
    if (toupper(userAnswer) == correctAnswer) {
        printf("Correct!\n");
        (*score)++;
    } else {
        printf("Wrong. The correct answer was %c.\n", correctAnswer);
    }
}