#include "text_utility_youssef.h"


//This function counts how many vowels and consonants in a word in a Pair struct
Pair counting_vow_consonants(char* word)
{
    lowercasing(word);
    Pair pair = {0, 0};
    while(*word!='\0')
    {
        if (*word=='a'||*word=='e'||*word=='o'||*word=='i'||*word=='u') 
            pair.vowels++;
        else if(isalpha(*word))
            pair.consonants++;
        word++;
    }
    return pair;
}




//This function reverse the passed c-style string
void reversing(char* word) {
    if (!*word)return;

    int size=0;
    while(word[size]!='\0')
    {
        size++;
    }
    size--;
    int i=0;
    while(i<size)
    {
        swap(word[i],word[size]);
        size--;
        i++;
    }

}



//This function check if the word is palindrome or not 
//It's a case sensitive function
//empty string is considered a palindrome
bool checking_palindrome(char* word) {

    if (!*word)return true;

    bool is_palindrome = true;
    int size=0;
    while(word[size]!='\0')
    {
        size++;
    }
    size--;
    int i=0;
    while(i<size)
    {
        if(word[i]!=word[size])
        {
            is_palindrome = false;
            return is_palindrome;
        }
        size--;
        i++;
    }
    return is_palindrome;
}


//This function return the number of occurrence of specific substring in the c-string
int counting_sub( const char* word,const char* substr) 
{
    int counter = 0;
    int substr_len = 0;
    
    while(substr[substr_len] != '\0') {
        substr_len++;
    }
    
    if(substr_len == 0) return 0;
    
    for(int i = 0; word[i] != '\0'; i++) 
    {
        bool match = true;
        for(int j = 0; substr[j] != '\0'; j++) 
        {
            if(word[i + j] == '\0' || substr[j] != word[i + j]) 
            {
                match = false;
                break;
            }
        }
        if(match) {
            counter++;
            i += substr_len - 1; 
        }
    }
    return counter;
}



//This function encrypt the word based on the key shared
//It's case sensitive
void caesar_encryption(char word[], char key[]) {
    int word_len = strlen(word);
    int key_len = strlen(key);

    if (key_len == 0||word_len==0) {
        return;
    }

    for (int i = 0; i < word_len; i++) {
        char current_key = key[i % key_len]; 
        int shift;

        if (current_key >= 'A' && current_key <= 'Z') {
            shift = current_key - 'A';
        }
        else if (current_key >= 'a' && current_key <= 'z') {
            shift = current_key - 'a';
        }
        else {
            shift = 0;  
        }

        if (word[i] >= 'A' && word[i] <= 'Z') {
            word[i] = 'A' + ((word[i] - 'A' + shift) % 26);
        }
        else if (word[i] >= 'a' && word[i] <= 'z') {
            word[i] = 'a' + ((word[i] - 'a' + shift) % 26);
        }
        }
}




//This Function decrypts the word based on the key shared
//It's case sensitive 
void caesar_decryption(char word[], char key[]) {
    int word_len = strlen(word);
    int key_len = strlen(key);

    if (key_len == 0 || word_len == 0) {
        return;
    }
    
    for (int i = 0; i < word_len; i++) {
        char current_key = key[i % key_len]; 
        int shift;

        if (current_key >= 'A' && current_key <= 'Z') {
            shift = current_key - 'A';
        }
        else if (current_key >= 'a' && current_key <= 'z') {
            shift = current_key - 'a';
        }
        else {
            shift = 0;  
        }

        if (word[i] >= 'A' && word[i] <= 'Z') {
            int val = (word[i] - 'A' - shift) % 26;
            if (val < 0) val += 26;  
            word[i] = 'A' + val;
        }
        else if (word[i] >= 'a' && word[i] <= 'z') {
            int val = (word[i] - 'a' - shift) % 26;
            if (val < 0) val += 26;  
            word[i] = 'a' + val;
        }
    }
}