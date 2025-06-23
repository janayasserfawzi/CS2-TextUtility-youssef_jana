#pragma once 
#include <iostream>
using namespace std;
#include "text_utility_youssef.h"




int main()
{
    char* palChecker= "youssef";
    cout<<checking_palindrome(palChecker)<<endl;
    char* pal= "yooy";
    cout<<checking_palindrome(pal);

    return 0;
}