#include <stdio.h>
#include <string.h>

// Structure to store a character and its frequency
typedef struct {
    char character;
    int count;
} RLE;

// Function to perform Run-Length Encoding
int runLengthEncoding(char *input, RLE encoded[]) {
    int len = strlen(input);
    int i, j = 0;

    for (i = 0; i < len; i++) {
        int count = 1;

        // Count occurrences of the same character
        while (i < len - 1 && input[i] == input[i + 1]) {
            count++;
            i++;
        }

        // Store character and its count in the structure
        encoded[j].character = input[i];
        encoded[j].count = count;
        j++;
    }

    return j; // Return the total number of encoded elements
}

// Function to print the encoded result
void printEncoded(RLE encoded[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%c%d", encoded[i].character, encoded[i].count);
    }
    printf("\n");
}

int main() {
    char input[100];
    RLE encoded[100]; // Array of structs to hold encoded data

    printf("The string to compress: ");
    scanf("%s", input);

    int encodedSize = runLengthEncoding(input, encoded);

    printf("Final string after compression : ");
    printEncoded(encoded, encodedSize);

    return 0;
}
