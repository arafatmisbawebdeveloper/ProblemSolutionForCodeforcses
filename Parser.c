#include <stdio.h>
#include <ctype.h>

char s[1000];
int p;

void skip() {
    while (s[p] == ' ' || s[p] == '\t' || s[p] == '\n') p++;
}

int ID() {
    skip();
    if (!isalpha((unsigned char)s[p]) && s[p] != '_') return 0;
    p++;
    while (isalnum((unsigned char)s[p]) || s[p] == '_') p++;
    return 1;
}

int E();

int F() {
    skip();
    if (s[p] == '(') {
        p++;
        if (!E()) return 0;
        skip();
        if (s[p] != ')') return 0;
        p++;
        return 1;
    }
    return ID();
}

int T() {
    if (!F()) return 0;
    skip();
    while (s[p] == '*') {
        p++;
        if (!F()) return 0;
        skip();
    }
    return 1;
}

int E() {
    if (!T()) return 0;
    skip();
    while (s[p] == '+') {
        p++;
        if (!T()) return 0;
        skip();
    }
    return 1;
}

int main() {
    printf("Enter expression: ");
    fgets(s, sizeof(s), stdin);
    p = 0;
    if (E()) {
        skip();
        if (s[p] == '\0' || s[p] == '\n')
            printf("Valid Expression\n");
        else
            printf("Invalid Expression\n");
    } else {
        printf("Invalid Expression\n");
    }
    return 0;
}
