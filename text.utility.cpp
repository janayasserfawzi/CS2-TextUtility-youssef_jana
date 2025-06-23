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
