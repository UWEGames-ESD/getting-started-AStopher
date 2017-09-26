#include "stdafx.h"
#include "Program.h"
#include <stdio.h>
#include <iostream>

using namespace std;

void Program::Init() {
	std::cout << "Hello, welcome to UWE!\n"; //Output string to screen.
	while (true) //Endlessly execute loop.
		cin; //Stop the program from exiting (waits for input).
	//system("pause");//Alternative way of pausing output.
}