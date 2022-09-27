#include <iostream>
#include "Time.h"
using namespace std;

int main()
{
    Time t;
    t.Read();
    t.Display();
    t.minutes(60);
    t.Display2();
    return 0;
}
