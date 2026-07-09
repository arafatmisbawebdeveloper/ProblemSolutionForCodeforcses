#include <stdio.h>
#include <ctype.h>
char s[1000];
int p;
void skip() {
   while (s[p] == ' ' || s[p] == '\t' || s[p] == '\n')
   p++;
 }

int ID()
{
 skip();
    if (!isalpha((unsigned char)s[p]) && s[p] != '_') return 0;
          p++;
    while (isalnum((unsigned char)s[p]) || s[p] == '_') p++;
    return 1;
}

int NUM() {
   skip();
   if (!isdigit((unsigned char)s[p])) return 0;
   while (isdigit((unsigned char)s[p])) p++;
   return 1;
}

int E(); // forward
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
  return ID() || NUM();
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
int S() {
    // id = E ;
    if (!ID()) return 0;
        skip();
    if (s[p] != '=') return 0;
        p++;
    if (!E()) return 0;
        skip();
    if (s[p] != ';') return 0;
         p++;
    return 1;
}
int main() {
    printf("Enter statement: ");
    fgets(s, sizeof(s), stdin);
    p = 0;
    if (S()) {
      skip();
        if (s[p] == '\0' || s[p] == '\n')
             printf("Valid Statement\n");
         else
             printf("Invalid Statement\n");
    }
    else {
        printf("Invalid Statement\n");
    }
    return 0;
}
