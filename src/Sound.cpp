#include "sound.h"

Sound::Sound()
{
    //ctor
}
void Sound::Hit()
{
    PlaySound("C:\\Users\\Max\\Desktop\\CSS2A\\BaseballGame\\Hit.wav", NULL, SND_ASYNC);
    Sleep(1000);
}
void Sound::HomeRun()
{
    PlaySound("C:\\Users\\Max\\Desktop\\CSS2A\\BaseballGame\\HomeRun.wav", NULL, SND_ASYNC);
    Sleep(6000);
}
void Sound::Applause()
{
    PlaySound("C:\\Users\\Max\\Desktop\\CSS2A\\BaseballGame\\Applause.wav", NULL, SND_ASYNC);
    Sleep(3000);
}
void Sound::Play()
{
    PlaySound("C:\\Users\\Max\\Desktop\\CSS2A\\BaseballGame\\PlayBall.wav", NULL, SND_ASYNC);
    Sleep(1500);
}
void Sound::Background()
{
    PlaySound("C:\\Users\\Max\\Desktop\\CSS2A\\BaseballGame\\BackgroundFans.wav", NULL, SND_ASYNC);
}
void Sound::StrikeOne()
{
    PlaySound("C:\\Users\\Max\\Desktop\\CSS2A\\BaseballGame\\StrikeOne.wav", NULL, SND_ASYNC);
    Sleep(1800);
}
void Sound::StrikeTwo()
{
    PlaySound("C:\\Users\\Max\\Desktop\\CSS2A\\BaseballGame\\StrikeTwo.wav", NULL, SND_ASYNC);
    Sleep(1500);
}
void Sound::StrikeThree()
{
    PlaySound("C:\\Users\\Max\\Desktop\\CSS2A\\BaseballGame\\StrikeThree.wav", NULL, SND_ASYNC);
    Sleep(1500);
}
