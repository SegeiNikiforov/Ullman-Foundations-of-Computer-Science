#include <stdio.h>
#include <stdlib.h>

// Exercise 2.2.4*
char * compare(char *, char *);
int toLower(int c);
int main()
{
    char s1[] = "bal";
    char s2[] = "BASE";

    printf("%s\n", compare(s1, s2));

    return 0;
}

char * compare(char *s1, char *s2) {
    int i;
    for (i = 0; toLower(s1[i]) == toLower(s2[i]); i++) {
        if (s1[i] == '\0') {
            return "FALSE";
        }
    }

    if ((toLower(s1[i]) - toLower(s2[i])) < 0) {
        return "TRUE";
    }
    return "FALSE";
}

int toLower(int c) { // Works only for ASCII
    if (c >= 'A' && c <= 'Z') {
        return c + 32;
    }
    else {
        return c;
    }
}
