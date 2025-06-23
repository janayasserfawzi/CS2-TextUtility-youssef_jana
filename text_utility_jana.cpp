#include "text_utility_jana.h"


//this function returns the number of words in a given string
//single characters, numbers, or symbols are counted as whole words
int counting_word(const char word[]){
    int count =0;
    while(*word != '\0')
    {
        if(*word==' '){
            count++;
        }
        word++;

    }
    
    
    return ++count;
}


//this function counts the number of characters in a string
//this strig doesn't have to be one word
//numbers and symbols are counted as characters
//spaces are not considered a character
int counting_characters(const char word[]){
    int count =0;
    while(*word != '\0')
    {
        if(*word==' '){
        	word++;	
        	continue;
        }
        count++;
        word++;
    }
    return count;

}


//this function changes the whole string into uppercase
//it takes strings all in lowercase
//it only take alphabet characters
void uppercasing(char* word){
    int i=0;
    while(word[i]!='\0'){
        if(word[i]<='z' && word[i]>='a'){
            word[i]-=32;
        }
        i++;
    }
}


//this function changes the whole string into lowercase
//it takes strings all in uppercase
//it only take alphabet characters
void lowercasing(char* word){
    int i=0;
    while(word[i]!='\0'){
        if(word[i]<='Z' && word[i]>='A'){
            word[i]+=32;
        }
        i++;
    }
}
