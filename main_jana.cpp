#include "text_utility_youssef.h"
using namespace std;

int main(){
    Pair x;
    char word[]= "this code is working";
    char substr[]= "this";
    char *mainWord= word;
    char *originWord=word;
    x= counting_vow_consonants(word);

    cout<<"number of words:"<<counting_word(word)<<endl;
    cout<<"number of characters:"<<counting_characters(word)<<endl;
    uppercasing(word);
    cout<<"uppercase:"<<word<<endl;
    lowercasing(word);
    cout<<"lowercase:"<<word<<endl;
    cout<<"number of vowels:"<<x.vowels<<endl;
    cout<<"number of consonants:"<<x.consonants<<endl;
    reversing(mainWord);
    cout<<"reverse:"<<word<<endl;
    cout<<"Palindrome:"<<checking_palindrome(mainWord)<<endl;
    cout<<"number of substring:"<<counting_sub(originWord,substring)<<endl;

    return 0;
}
