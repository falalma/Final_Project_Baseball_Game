#include "Math.h"

Math::Math()
{
    //ctor
}

void Math::setNumbers(int num1, int num2, int answer)
{
    this->num1 = num1;
    this->num2 = num2;
    this->answer = answer;
}

void Math::setAddition(int add)
{
    this->add = add;
}

void Math::setSubtraction(int subtract)
{
    this->subtract = subtract;
}

void Math::setMultiplication(int multiply)
{
    this->multiply = multiply;
}

void Math::setDivision(int divide)
{
    this->divide = divide;
}

int Math::getAddition()
{
    srand(static_cast<unsigned int>(time(0)));
    time_t startTime, endTime;
    int seconds;
    bool play;

    int strikes = 0;

    cout << "Play ball (1 = yes, 0 = no): ";
    cin >> play;

    if (play == false)
    {
        cout << "Game Over!!!\n";
        exit(0);
    }
    else
    {
        while (true)
        {
        num1 = (rand()%10)+1; // generates random number
        num2 = (rand()%10)+1; // generates random number
        int ans = num1 + num2; // first two integers give us answers.
        int guess;
        int points = 0;

        cout << num1 << " + " << num2 << endl; // asks the question
        startTime = time(NULL); // timer starts
        cin >> guess;

        endTime = time(NULL); // ends the time when your done answering

        seconds = endTime - startTime; // calculates how many seconds you answered the  question

        if(guess == ans)
        {
            cout << "That took " << seconds << " seconds.\n";

            if (seconds <= 2)
            {
                cout << "Home Run!\n";
                points++;
                cout << "Points: " << points << endl;
            }
            else if (seconds <= 3)
            {
                cout << "You hit a triple!\n";
            }
            else if (seconds <= 4)
            {
                cout << "You hit a double!\n";
            }
            else if (seconds <=5)
            {
                cout << "You hit a single!\n";
            }
            else
            {
                cout << "Foul ball!\n";
                if(strikes < 2)
                {
                    strikes++;
                    cout << "strikes: " << strikes << endl;
                }
                else
                {
                    cout << "strikes: 2" << endl;
                }
            }
        }
        else
        {
            strikes++;
            cout << "strikes: " << strikes << endl;

            if(strikes == 3)
            {
                cout << "Strike three you're out!!!!\n";
                cout << "Next Batter." << endl;
                break;
            }

        }
    }
    }
    return num1 + num2;
}

int Math::getSubtraction()
{
    srand(static_cast<unsigned int>(time(0)));
    num1 = (rand()%10)+1;
    num2 = (rand()%10)+1;
    int ans = num1 - num2;
    int guess;
    time_t startTime, endTime;
    int seconds;
    bool play;
    int response;

    int strikes = 0;

    //cout << "Play ball (1 = yes, 0 = no): ";
    //cin >> play;

    //if (play = true)
    //{
        startTime = time(NULL);

        cout << num1 << " - " << num2 << endl;
        cin >> guess;

        endTime = time(NULL);

        seconds = endTime - startTime;

        if(guess == ans)
        {
            cout << "That took " << seconds << " seconds.\n";

            if (seconds <= 2)
            {
            cout << "Home Run!\n";
            }
            else if (seconds <= 3)
            {
                cout << "You hit a triple!\n";
            }
            else if (seconds <= 4)
            {
                cout << "You hit a double!\n";
            }
            else if (seconds <=5)
            {
                cout << "You hit a single!\n";
            }
            else
            {
                cout << "Foul ball!\n";
            }
        }
        else
        {
            strikes++;
            cout << "strikes: " << strikes << endl;
        }

        if(strikes == 3)
        {
            cout << "Strike three you're out!!!!";
            //break;
        }
    //}

    return num1 - num2;
}

int Math::getMultiplication()
{
    srand(static_cast<unsigned int>(time(0)));
    num1 = (rand()%10)+1;
    num2 = (rand()%10)+1;
    int ans = num1 * num2;
    int guess;
    time_t startTime, endTime;
    int seconds;
    bool play;
    int response;

    int strikes = 0;

    //cout << "Play ball (1 = yes, 0 = no): ";
    //cin >> play;

    //if (play = true)
    //{
        startTime = time(NULL);

        cout << num1 << " x " << num2 << endl;
        cin >> guess;

        endTime = time(NULL);

        seconds = endTime - startTime;

        if(guess == ans)
        {
            cout << "That took " << seconds << " seconds.\n";

            if (seconds <= 2)
            {
            cout << "Home Run!\n";
            }
            else if (seconds <= 3)
            {
                cout << "You hit a triple!\n";
            }
            else if (seconds <= 4)
            {
                cout << "You hit a double!\n";
            }
            else if (seconds <=5)
            {
                cout << "You hit a single!\n";
            }
            else
            {
                cout << "Foul ball!\n";
            }
        }
        else
        {
            strikes++;
            cout << "strikes: " << strikes << endl;
        }

        if(strikes == 3)
        {
            cout << "Strike three you're out!!!!";
            //break;
        }
    //}
    return num1 * num2;
}

int Math::getDivision()
{
    srand(static_cast<unsigned int>(time(0)));
    num1 = (rand()%10)+1;
    num2 = (rand()%10)+1;
    int ans = num1 / num2;
    int guess;
    time_t startTime, endTime;
    int seconds;
    bool play;
    int response;

    int strikes = 0;

    cout << "Play ball (1 = yes, 0 = no): ";
    cin >> play;

    if (play = true)
    {
        startTime = time(NULL);

        cout << num1 << " / " << num2 << endl;
        cin >> guess;

        endTime = time(NULL);

        seconds = endTime - startTime;

        if(guess == ans)
        {
            cout << "That took " << seconds << " seconds.\n";

            if (seconds <= 2)
            {
            cout << "Home Run!\n";
            }
            else if (seconds <= 3)
            {
                cout << "You hit a triple!\n";
            }
            else if (seconds <= 4)
            {
                cout << "You hit a double!\n";
            }
            else if (seconds <=5)
            {
                cout << "You hit a single!\n";
            }
            else
            {
                cout << "Foul ball!\n";
            }
        }
        else
        {
            strikes++;
            cout << "strikes: " << strikes << endl;
        }

        if(strikes == 3)
        {
            cout << "Strike three you're out!!!!";
            //break;
        }

    }
    return num1 / num2;
}
