#include <iostream>
#include "Sound.h"
#include "mmsystem.h"
#include "windows.h"
#include "Math.h"
#include <cstdlib>
#include <ctime>
using namespace std;

int main ()//main
{
    Sound player1;

    player1.Background();
    player1.HomeRun();
    player1.Hit();

    Math result;
    int number1, number2, ans;

    result.setNumbers(number1, number2, ans);
    result.getAddition();
    result.getSubtraction();
    result.getMultiplication();
    result.getDivision();

    return 0;
}
