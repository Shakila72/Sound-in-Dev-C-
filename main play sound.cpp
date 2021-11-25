
#include<iostream>
#include<windows.h>   // to use system functions 
#include<mmsystem.h> // to use multimedia functions
using namespace std;
int main()
{
PlaySound(TEXT("Welcome Ramazan.wav"),NULL,SND_SYNC);
return 0;
}    //C++ code to play sound in Dev C++
