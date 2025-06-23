#include "text_utility_youssef.h"


//This function return an array its first element is the vowels counts
// and the second element is the consonatnts count
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




//This function reverse a c-style array 
// You should make sure that the array is not on the read-only memory
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