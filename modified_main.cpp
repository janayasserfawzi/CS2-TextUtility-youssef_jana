#include "text_utility_youssef.h"

int main() {
    // Original test string
    char word[] = "this code is working";
    char word_copy1[50], word_copy2[50];
    strcpy(word_copy1, word);  // Make copies for different operations
    strcpy(word_copy2, word);
    char substr[] = "this";
    
    // Password test
    char password[] = "ENOUGH";
    char password_key[] = "jayou";

    
    // Counting vowels and consonants
    Pair x = counting_vow_consonants(word_copy1);
    
    // Output results
    cout << "number of words: " << counting_word(word) << endl;
    cout << "number of characters: " << counting_characters(word) << endl;
    
    // Uppercase/lowercase tests
    uppercasing(word_copy1);
    cout << "uppercase: " << word_copy1 << endl;
    lowercasing(word_copy1);
    cout << "lowercase: " << word_copy1 << endl;
    
    // Vowel/consonant count
    cout << "number of vowels: " << x.vowels << endl;
    cout << "number of consonants: " << x.consonants << endl;
    
    // Reverse test
    reversing(word_copy2);
    cout << "reverse: " << word_copy2 << endl;
    
    // Palindrome test (use original word)
    cout << "Palindrome: " << checking_palindrome(word) << endl;
    
    // Substring count
    cout << "number of substring: " << counting_sub(word, substr) << endl;
    
    // Encryption/decryption test
    cout << password << endl;
    caesar_encryption(password, password_key);
    cout << "The encryption of password: " << password << endl;
    caesar_decryption(password, password_key);
    cout << "The decryption of password: " << password << endl;
    
    return 0;
}
