#include <stdio.h>

int StringLength(char sentence[]) {
    int l = 0;
    while (sentence[l] != '\0') {
        l++;
    }
    return l;
}

int NumOfWords(char sentence[]) {
    int StrLength = 1;  // Start with 1 to count the last word (or single word)
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == ' ') {
            StrLength++;
        }
    }
    return StrLength;
}

int NumOfVowels(char sentence[], int StrLength) {
    int vowelCount = 0;
    for (int i = 0; i < StrLength; i++) {
        char ch = sentence[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowelCount++;
        }
    }
    return vowelCount;
}

int VowelFreq(char sentence[], char vowel) {
    int freq = 0;
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == vowel || sentence[i] == (vowel + 'A' - 'a')) {
            freq++;
        }
    }
    return freq;
}

int main() {
    char sentence[100];
    printf("Enter the sentence: ");
    fgets(sentence, 100, stdin);

    int length = StringLength(sentence);
    printf("Length of the sentence: %d\n", length);

    int wordCount = NumOfWords(sentence);
    printf("Number of words: %d\n", wordCount);

    int vowelCount = NumOfVowels(sentence, length);
    printf("Number of vowels: %d\n", vowelCount);

    // Print frequency of each vowel
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    for (int i = 0; i < 5; i++) {
        int freq = VowelFreq(sentence, vowels[i]);
        printf("Frequency of vowel '%c': %d\n", vowels[i], freq);
    }

    return 0;
}

