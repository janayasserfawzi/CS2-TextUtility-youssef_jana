#include "text_utility_jana.h"


//this function returns the number of words in a given string
//single characters are counted as whole words
int counting_word(const char word[]){
    int count =0;
    int i=0;
    if(word[i] == '\0' || (word[i]==' ' && word[i+1]=='\0')){
        return 0;
    }
    while(word[i] != '\0')
    { 
        if(!isalpha(word[i])){
            if(word[i]==' ' && isalpha(word[i+1]))
            {
            count ++;
            }
            
            else
            {
            i++;
            continue;
            }
        }
        i++;
    }
    if(word[0]==' '){
        count--;
    }
    return ++count;
}


//this function counts the number of characters in a string
//this string doesn't have to be one word
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
