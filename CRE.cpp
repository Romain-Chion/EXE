// CRE.cpp : This file contains the 'main' function. Program execution begins and ends there.
//cl /EHsc /Zi

#include "pch.h"
#include <iostream>
#include <windows.h>
//#include <winuser.h>
#include <time.h>

int main()
{
  while (TRUE) {
    Sleep(59000);

    /*POINT p;
    GetCursorPos(&p);
    double X = (rand() % 2 == 1) ? p.x + 10 : p.x -10;
    double Y = p.y;
    SetCursorPos(X,Y);*/


    INPUT inputs[4];
    ::ZeroMemory(inputs, sizeof(inputs)); 

    inputs[0].type       = inputs[2].type       = INPUT_KEYBOARD;
    inputs[0].ki.wVk     = inputs[2].ki.wVk     = VK_SCROLL;
    inputs[1].ki.dwFlags = inputs[3].ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(4, inputs, sizeof(INPUT));
  }
}
