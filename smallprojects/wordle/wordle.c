/* wordle.txt */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ResultGreen  1
#define ResultYellow 2
#define ResultRed    3

typedef char Result;

void Example_print_result(Result res[]);
void check_word(const char *guess, const char *word, Result res[]);

int main(int argc, char *argv[]) {
    if (argc != 3 || strlen(argv[1]) != 5 || strlen(argv[2]) != 5) {
        fprintf(stderr, "Usage: %s <CORRECTWORD> <GUESSWORD>\n", argv[0]);
        return EXIT_FAILURE;
    }

    Result res[5] = {0};
    check_word(argv[1], argv[2], res);
    Example_print_result(res);
    return EXIT_SUCCESS;
}

void Example_print_result(Result res[]) {
    static const char *color[] = {"Green", "Yellow", "Red"};
    for (int i = 0; i < 5; i++) {
        printf("%s\n", (res[i] >= ResultGreen && res[i] <= ResultRed) ? color[res[i] - 1] : "Unknown");
    }
}

void check_word(const char *guess, const char *word, Result res[]) {
    if (!guess || !word || !res) {
        fprintf(stderr, "Invalid input\n");
        return;
    }
    for (int i = 0; i < 5; i++) {
        if (guess[i] == word[i]) {
            res[i] = ResultGreen;
        } else if (strchr(word, guess[i]) != NULL) {
            res[i] = ResultYellow;
        } else {
            res[i] = ResultRed;
        }
    }
}

