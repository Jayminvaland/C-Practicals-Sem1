#include <stdio.h>

int strLength(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}


void strReverse(char s[]) {
    int i = 0, j = strLength(s) - 1;
    char temp;
    while (i < j) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}


int strCompare(char s1[], char s2[]) {
    int i = 0;
    while (s1[i] != '\0' || s2[i] != '\0') {
        if (s1[i] != s2[i])
            return s1[i] - s2[i];  
        i++;
    }
    return 0;  
}

void strCopy(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}


void strConcat(char s1[], char s2[]) {
    int i = strLength(s1);
    int j = 0;
    while (s2[j] != '\0') {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';
}


void strUpper(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32; 
        i++;
    }
}

void strLower(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
        i++;
    }
}

void strCapitalize(char s[]) {
    int i = 0;

    
    if (s[0] >= 'a' && s[0] <= 'z')
        s[0] = s[0] - 32;

    
    while (s[i] != '\0') {
        if (s[i] == ' ' && (s[i+1] >= 'a' && s[i+1] <= 'z')) {
            s[i+1] = s[i+1] - 32;
        }
        i++;
    }
}
int main() {
    printf("My name is Jaymin\n");
    char note1[200], note2[200], copyNote[200];

    printf("Enter first note: ");
    fgets(note1, 200, stdin);

    printf("Enter second note: ");
    fgets(note2, 200, stdin);

    printf("\nLength of note1: %d\n", strLength(note1));

    strReverse(note1);
    printf("Reversed note1: %s\n", note1);

    int cmp = strCompare(note1, note2);
    if (cmp == 0)
        printf("Notes are identical.\n");
    else
        printf("Notes are different.\n");

    strCopy(copyNote, note2);
    printf("Copied note2 into copyNote: %s\n", copyNote);

    strConcat(note1, note2);
    printf("Concatenated notes: %s\n", note1);

    strUpper(note1);
    printf("Uppercase note: %s\n", note1);

    strLower(note2);
    printf("Lowercase note: %s\n", note2);
    strCapitalize(note2);
    printf("Capitalized words: %s\n", note2);
    return 0;


}