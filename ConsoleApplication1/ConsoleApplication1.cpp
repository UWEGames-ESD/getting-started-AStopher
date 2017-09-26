// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Program.h"


int main()
{
	Program *mProg = new Program; //Create new instance of Program.
	mProg->Init(); //Execute function from Program class.
	delete(mProg); //GC
    return 0;
}

