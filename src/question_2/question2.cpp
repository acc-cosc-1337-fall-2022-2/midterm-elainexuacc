#include "question2.h"

bool test_config()
{
    return true;
}

void swap_values_reference(int &x, int &y){
    int tmp;
    tmp = x;
    x = y;
    y = tmp;

    return;
}

void swap_values_value(int x, int y){
    int tmp;

    tmp = x;
    x = y;
    y = tmp;
    
    return;
}