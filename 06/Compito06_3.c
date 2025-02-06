#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_palindrome(const char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    const char *strings[] = {"apple", "banana", "123hello", "Aardvark", "racecar", "world"};
    int count_a = 0, count_numbers = 0, count_palindromes = 0;
    const char *longest = strings[0];
    const char *shortest = strings[0];
    int all_longer_than_5 = 1;
    int all_have_vowel = 1;

    for (int i = 0; i < 6; i++) {
        if (strings[i][0] == 'A' || strings[i][0] == 'a') {
            count_a++;
        }
        if (strpbrk(strings[i], "0123456789")) {
            count_numbers++;
        }
        if (is_palindrome(strings[i])) {
            count_palindromes++;
        }
        if (strlen(strings[i]) > strlen(longest)) {
            longest = strings[i];
        }
        if (strlen(strings[i]) < strlen(shortest)) {
            shortest = strings[i];
        }
        if (strlen(strings[i]) <= 5) {
            all_longer_than_5 = 0;
        }
        if (!strpbrk(strings[i], "aeiouAEIOU")) {
            all_have_vowel = 0;
        }
    }

    printf("Stringhe che iniziano con 'A' o 'a': %d\n", count_a);
    printf("Stringhe che contengono almeno un numero: %d\n", count_numbers);
    printf("Stringa più lunga: %s\n", longest);
    printf("Stringa più corta: %s\n", shortest);
    printf("Numero di stringhe palindrome: %d\n", count_palindromes);

    if (all_longer_than_5) {
        printf("Tutte le stringhe sono lunghe più di 5 caratteri.\n");
    }
    if (all_have_vowel) {
        printf("Tutte le stringhe contengono almeno una vocale.\n");
    }

    return 0;
}