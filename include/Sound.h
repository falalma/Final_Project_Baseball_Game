#ifndef SOUND_H
#define SOUND_H
#include <iostream>

#include <windows.h>
#include <mmsystem.h>
#include <stdlib.h>

using namespace std;

class Sound
{
    public:
        Sound();
        void Hit();
        void HomeRun();
        void Applause();
        void Play();
        void Background();
        void StrikeOne();
        void StrikeTwo();
        void StrikeThree();

};

#endif // SOUND_H
