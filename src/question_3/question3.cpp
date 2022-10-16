#include "question3.h"
#include <iostream>

using std::string;
using std::to_string;

bool test_config()
{
    return true;
}

string get_fib_sequence(int n){
    int ii = 0;
    int nextNum;
    int num1 = 0;
    int num2 = 1;

    string fib_sequence;
    fib_sequence.append("0 ");
    fib_sequence.append("1 ");

    while(ii <= n-2){
        nextNum = num1 + num2;
        num1 = num2;
        num2 = nextNum;

        fib_sequence.append(to_string(nextNum));
        fib_sequence.append(" ");

        ii++;
    }

    if (!fib_sequence.empty()) {
        fib_sequence.resize(fib_sequence.size()-1);
    }

    return fib_sequence;

    return 0;
}