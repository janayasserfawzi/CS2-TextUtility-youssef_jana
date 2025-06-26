#pragma once
#include "text_utility_jana.h"
#include <iostream>
using namespace std;


struct Pair {
    int vowels;
    int consonants;
};

//Developed by Youssef
Pair counting_vow_consonants(char* word);
void reversing(char*);
bool checking_palindrome(char*);
int counting_sub(const char*,const char*);
void caeser_encryption(char*,char*);
void caeser_decryption(char*,char*);