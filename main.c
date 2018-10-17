/*
 * This program counts how many words are in a string entered by the user.
 *
 * Author: Jonathan Nuñez de Caceres.
 * Email: A01411277@itesm.mx
 * Date: 17/10/18
 */

#include <stdio.h> //Standard input/output heared.

//Function to count words.
int CountWords(char string[]) {
    int words = 0;
    int flag = 1;

    // Loop for every character in the string.
    for (int i = 0; string[i] != '\0' && string[i] != '\n'; i++) {
        // If the character isn't a space and the previous character was
        // a space, the word counter is incremented (Starting flag with 1).
        if (string[i] != ' ' && string[i] != '\t' && flag) {
            words++;
            flag = 0;
            // The flag variable is changed to 1 when the
            // character is a space and the previous character wasn't a space
        } else if ((string[i] == ' ' || string[i] == '\t') && !flag) {
            flag = 1;
        }
    }
    return words;
}

int main() {
    char string[100];

    printf("Enter a text:");
    fgets(string, sizeof(string), stdin);

    printf("The text has %d words.", CountWords(string));
    return 0;
}