#include "question4.h"
#include <iostream>

using std::string;

int main()
{
    string str1;
    string str2;

    cin>>str1>>str2;

    p_distance = get_dna_p_distance(str1, str2);

    cout<<p_distance;

    return 0;
}