// #include <iostream>
// using namespace std;

#include "text_utility_youssef.h"

//This function encrypts specific text based on the provided key
// void caeser_encryption(char* word,char* key)
// {
//     int word_size=0;

//     while(word[word_size]!='\0')
//     {
//         word_size++;
//     }
    
//     word_size--;

//     char code[word_size+1];
//     int key_size=0;

//     while(key[key_size]!='\0')
//     {
//         key_size++;
//     }
    

//     for(int i=0; i<word_size;i++)
//     {
//         code[i]= key[i%key_size];   
//     }

//     for (int i=0; i <word_size; i++)
//         word[i]= (word[i]+code[i]);

// }


// //This Function decrypts the word based on the key shared
// void caeser_decryption(char* word,char* key)
// {
//     int word_size=0;
    
//     while(word[word_size]!='\0')
//     {
//         word_size++;
//     }
//     word_size--;

//     char code[word_size+1];
//     int key_size=0;

//     while(key[key_size]!='\0')
//     {
//         key_size++;
//     }
    


//     for(int i=0; i<word_size;i++)
//     {
//         code[i]= key[i%key_size];   
//     }

//     for (int i=0; i <word_size; i++)
//         word[i]= (word[i]-code[i]);

// }

int main()
{
    char word[]="ENOUGH";
    char key[]="jayou";

    caeser_encryption(word,key);
    cout<<word<<endl;
    caeser_decryption(word,key);
    cout<<word;

    return 0;
}