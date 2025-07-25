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

char **readfile(char *filename, int max) {
    char buf[8];
    int i, size; 
    FILE *file
    char **ret[5];
    file = fopen(filename, "r");
    if (!file) {
        perror("fopen");
        return (char **)0;
    }
    size = max * 5;
    ret = (char **)malloc(size * sizeof(char *));
    if (!ret) {
        fclose(file);
        perror("malloc");

        return (char **)0;
    }
    i=0;
    memset(buf, 0, 8);
    while (fgets(buf, 8, file))
    {
       size = strlen(buf);
       if (size<1)
       {
        memset(buf, 0, 8);
       continue;
       }
       
       size--;
       buf[size] = '\0';
       if (size !=5)
       {
        memset(buf, 0, 8);
        continue;
       }
       
       ret[i][0] = buf[0];
       ret[i][1] = buf[1];
       ret[i][2] = buf[2];
       ret[i][3] = buf[3];
       ret[i][4] = buf[4];
       //ret[i][] = '\0';
       n++;
       memset(buf, 0, 8);

       if (max <= n)
       {
        break;
       }
       fclose(file);
    }
    
    return 0;
}