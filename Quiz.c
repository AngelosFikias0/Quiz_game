#include <stdio.h>

// Structure to hold each question and its choices
typedef struct {
    char question[256];
    char choices[4][256];
    int correct_choice; // Index of the correct choice (0-3)
} Question;

// Function prototypes
void quiz(int *games_played, int *games_won, int *games_lost);
void statistics(int games_played, int games_won, int games_lost);

int main() {
    // Variables used
    int choice;
    int games_played = 0;
    int games_won = 0;
    int games_lost = 0;

    // While loop for menu
    while (1) {
        printf("Press:\n1 for new game\n2 for statistics\n3 for exiting\n");
        scanf("%d", &choice);

        // User chooses to either play,exit or view stats
        switch (choice) {
            case 1:
                quiz(&games_played, &games_won, &games_lost);
                break;

            case 2:
                statistics(games_played, games_won, games_lost);
                break;

            case 3:
                printf("Exiting the game...\n");
                return 0;

            default:
                printf("Invalid choice.\n");
                break;
        }
    }

    return 0;
}

void quiz(int *games_played, int *games_won, int *games_lost) {
    // This function has the questions with the choises 
    Question questions[10] = {
    {"What is the capital of France?", {"Berlin", "Madrid", "Paris", "Rome"}, 2},
    {"Who wrote 'To Kill a Mockingbird'?", {"Harper Lee", "J.K. Rowling", "Ernest Hemingway", "Mark Twain"}, 0},
    {"What is the largest planet in our solar system?", {"Earth", "Mars", "Jupiter", "Saturn"}, 2},
    {"What is the chemical symbol for gold?", {"Au", "Ag", "Fe", "Hg"}, 0},
    {"How many continents are there?", {"5", "6", "7", "8"}, 2},
    {"Who painted the Mona Lisa?", {"Vincent Van Gogh", "Pablo Picasso", "Leonardo da Vinci", "Claude Monet"}, 2},
    {"What is the hardest natural substance on Earth?", {"Gold", "Iron", "Diamond", "Platinum"}, 2},
    {"In which year did the Titanic sink?", {"1912", "1905", "1898", "1923"}, 0},
    {"What is the main ingredient in traditional Japanese miso soup?", {"Soybeans", "Rice", "Seaweed", "Tofu"}, 0},
    {"Who discovered penicillin?", {"Marie Curie", "Alexander Fleming", "Isaac Newton", "Albert Einstein"}, 1}
};

    // It also tracks games played, won and lost
    int score = 0;
    int answer;
    (*games_played)++;

    for (int i = 0; i < 10; i++) {
        // Prints question with choices
        printf("%s\n", questions[i].question);
        for (int j = 0; j < 4; j++) {
            printf("%d. %s\n", j + 1, questions[i].choices[j]);
        }
        printf("Your answer: ");
        scanf("%d", &answer);

        // Correct choice
        if (answer - 1 == questions[i].correct_choice) {
            printf("Correct!\n");
            score++;
        // Wrong choice, it also shows the correct one
        } else {
            printf("Wrong! The correct answer was: %s\n", questions[i].choices[questions[i].correct_choice]);
        }
    }

    // Prints score and it determines wether the game was lost or won
    printf("Your score: %d/10\n", score);

    if (score >= 5) {
        printf("You won this game!\n");
        (*games_won)++;
    } else {
        printf("You lost this game.\n");
        (*games_lost)++;
    }
}

void statistics(int games_played, int games_won, int games_lost) {
    // This function prints the statistics of the game
    printf("Games played: %d\n", games_played);
    printf("Games won: %d\n", games_won);
    printf("Games lost: %d\n", games_lost);
}
