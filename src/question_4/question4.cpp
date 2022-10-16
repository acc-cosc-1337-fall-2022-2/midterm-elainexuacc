//
#include "question4.h"
#include <iostream>
#include <cmath>

using std::string;
using std::cout;

bool test_config()
{
    return true;
}

double get_dna_p_distance(const string &str1, const string &str2) {
    int ii = 0;
    int count = 0;
    int size = str1.size()-1;

    while(ii <= size) {
        if(str1[ii] != str2[ii]) {
            count++;
        }

        ii++;
    }

    return round(count*10000.0/str1.size())/10000.0;

    return 0;
}