#ifndef MATH_H
#define MATH_H


#include <iostream>
#include <time.h>
#include <cstdlib>
#include <ctime>
using namespace std;

class Math
{
    public:
        Math();
        void setNumbers(int, int, int);
        void setAddition(int);
        void setSubtraction(int);
        void setMultiplication(int);
        void setDivision(int);

        int getAddition();
        int getSubtraction();
        int getMultiplication();
        int getDivision();

    private:
        int num1;
        int num2;
        int answer;
        int add;
        int subtract;
        int multiply;
        int divide;
        int points;
};


#endif // MATH_H
