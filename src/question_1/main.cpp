#include "question1.h"
#include <iostream>

using std::cout;
using std::cin;

int main()
{
    int sold;
    cin>>sold;

    int points;
    points = get_earned_points(sold);

    cout<<"Points Earned "<<points<<"\n";
}