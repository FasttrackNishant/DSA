#include <iostream>
#include "bird.h"
using namespace std;

void birdSomething(Bird *&Bird)
{
    bird->ear();
    bird->fly();
}

int main()
{
    Bird *bird =   new sparrow();
    birdSomething(bird);
        return 0;
}