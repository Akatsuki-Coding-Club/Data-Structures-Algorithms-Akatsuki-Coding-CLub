#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int freq1[26] = {0}; // Array to store character frequency for str1
    int freq2[26] = {0}; // Array to store character frequency for str2

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove the newline character

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove the newline character

    // Count character frequency for str1
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] >= 'a' && str1[i] <= 'z') {
            freq1[str1[i] - 'a']++;
        }
    }

    // Count character frequency for str2
    for (int i = 0; str2[i] != '\0'; i++) {
        if (str2[i] >= 'a' && str2[i] <= 'z') {
            freq2[str2[i] - 'a']++;
        }
    }

    // Print characters that are uncommon
    printf("Uncommon characters: ");
    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            printf("%c ", 'a' + i);
        }
    }

    return 0;
}
