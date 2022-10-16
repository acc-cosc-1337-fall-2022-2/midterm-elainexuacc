#include "question3.h"
#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main()
{
    do
    {
        cout<<"Please enter a number in the range of 1 to 15: "<<"\n";

        int n;
        cin>>n;
    }
    
    while(n > 15 || n < 1);

    if(n == 1) {
        cout<<"0 1";
    }

    if(n > 1) {
        string fib_sequence;
        fib_sequence = get_fib_sequence(n);

        cout<<fib_sequence;
    }
    
    return 0;
}