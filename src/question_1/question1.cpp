#include "question1.h"

bool test_config()
{
    return true;
}

int get_earned_points(int sold){
    if(sold >= 1 && sold <= 5){
        return sold * 1;
    }
    if(sold >= 6 && sold <= 10){
        return sold * 5;
    }
    if(sold >= 11 && sold <= 15){
        return sold * 10;
    }
    if(sold >= 16){
        return sold * 15;
    }
}