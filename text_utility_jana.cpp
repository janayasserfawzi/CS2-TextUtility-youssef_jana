#include "text_utility_jana.h"

int counting_word(const char word[]){
    int count =0;
    if (strlen(word)== 0){
        return 0;
    }

    while(*word != '\0')
    {
        if(*word==' '){
            count++;
        }
        word++;

    }
    
    
    return ++count;
}

int counting_characters(const char word[]){
    int count =0;
    if (strlen(word)== 0){
        return 0;
    }
    while(*word != '\0')
    {
        if(*word==' '){
            count++;
        }
        word++;
    }
    
    
    return count;

}


//Thank youu for this while loop it saved me a lot 
//I'm sorry that I criticized you for using it 🙏
void uppercasing(char* word){
    int i=0;
    while(word[i]!='\0'){
        if(word[i]<='z' && word[i]>='a'){
            word[i]-=32;
        }
        i++;
    }
}

void lowercasing(char* word){
    int i=0;
    while(word[i]!='\0'){
        if(word[i]<='Z' && word[i]>='A'){
            word[i]+=32;
        }
        i++;
    }
}
