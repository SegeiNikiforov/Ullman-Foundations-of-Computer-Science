char * compare(char *s1, char *s2) {
    int i;
    for (i = 0; s1[i] == s2[i]; i++) {
        if (s1[i] == '\0') {
            return "FALSE";
        }
    }

    if ((s1[i] - s2[i]) < 0) {
        return "TRUE";
    }
    return "FALSE";
}
