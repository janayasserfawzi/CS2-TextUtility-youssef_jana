#include "text_utility_youssef.h"


int main(){
    Pair x;
    char word[]= "this code is working";
    char substr[]= "this";
    char mainWord[]= "this code is working";
    char originWord[]="this code is working";
    char password[]="ENOUGH";
    char password_key[]="jayou";
    x= counting_vow_consonants(word);

    cout<<"number of words: "<<counting_word(word)<<endl;
    cout<<"number of characters: "<<counting_characters(word)<<endl;
    uppercasing(word);
    cout<<"uppercase: "<<word<<endl;
    lowercasing(word);
    cout<<"lowercase: "<<word<<endl;
    cout<<"number of vowels: "<<x.vowels<<endl;
    cout<<"number of consonants: "<<x.consonants<<endl;
    reversing(mainWord);
    cout<<"reverse: "<<word<<endl;
    cout<<"Palindrome: "<<checking_palindrome(mainWord)<<endl;
    cout<<"number of substring: "<<counting_sub(originWord,substr)<<endl;
    cout<<password<<endl;
    caesar_encryption(password,password_key);
    cout<<"The encryption of password: " << password<<endl;
    caesar_decryption(password,password_key);
    cout<<"The dencryption of password: " << password<<endl;


    return 0;
}
