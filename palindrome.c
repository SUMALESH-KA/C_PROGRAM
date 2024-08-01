#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Function to preprocess the string (remove non-alphanumeric characters and convert to lowercase)
void preprocess(const char* s, char* result) {
    int j = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (isalnum(s[i])) {  // Check if character is alphanumeric
            result[j++] = tolower(s[i]);  // Convert to lowercase and add to result
        }
    }
    result[j] = '\0';  // Null-terminate the result string
}

// Recursive function to check if a string is a palindrome
int palindrome(int i, const char* s) {
    int n = strlen(s);
    if (i >= n / 2) return 1;  // true
    if (s[i] != s[n - i - 1]) return 0;  // false
    return palindrome(i + 1, s);
}

int main() {
    // Example string
    const char* s = "Was it a car or a cat I saw?";
    
    // Preprocess the string
    char preprocessed[256];  // Adjust size if needed
    preprocess(s, preprocessed);

    // Check if the preprocessed string is a palindrome
    if (palindrome(0, preprocessed)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
