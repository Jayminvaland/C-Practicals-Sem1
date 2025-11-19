#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseWord(char *word) {
    int i = 0, j = strlen(word) - 1;
    while (i < j) {
        char temp = word[i];
        word[i] = word[j];
        word[j] = temp;
        i++;
        j--;
    }
}

int main() {
    printf("My name is Jaymin\n");
    FILE *fp;
    char ch, word[100];
    int idx = 0;

    fp = fopen("Demo.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open Demo.txt\n");
        return 1;
    }

    printf("Reversed Words:\n");

    while ((ch = fgetc(fp)) != EOF) {

        if (isspace(ch)) {
            if (idx > 0) {
                word[idx] = '\0';
                reverseWord(word);
                printf("%s", word);
                idx = 0;
            }
            printf("%c", ch); 
        } 
        else {
            word[idx++] = ch;
        }
    }

   
    if (idx > 0) {
        word[idx] = '\0';
        reverseWord(word);
        printf("%s", word);
    }

    fclose(fp);
    return 0;
}
