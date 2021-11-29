#include <iostream>
#include <stdio.h>
#include "chp3_EX8.h"

using namespace std;

int determine_even_or_odd(int inputNum){
    if(inputNum % 2 == 0){
        printf("%d is even.\n", inputNum);
    }
    else{
        printf("%d is odd.\n", inputNum);
    }

    return 0;
}