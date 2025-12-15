#include <stdio.h>
int main() {
    char sent[200];

    printf("Enter a sentence: ");
    gets(sent);   

    count(sent);
}
void count() {
	char str[];
    int count[26] = {0};
    int i;
    char ch;

    for (i = 0; str[i] != '\0'; i++) {
        ch = tolower(str[i]);

        if (ch >= 'a' && ch <= 'z') {
            if (ch != 'a' && ch != 'e' && ch != 'i' &&
                ch != 'o' && ch != 'u') {
                count[ch - 'a']++;
            }
        }
    }
	printf("\n");
    printf("Consonant occurrences is :\n");
    for (i = 0; i < 26; i++) {
        if (count[i] > 0) {
            printf("%c : %d\n", i + 'a', count[i]);
        }
    }
}



