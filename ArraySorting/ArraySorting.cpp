// ArraySorting.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include "InputFunctiuons.h"
#include "OutputFunctions.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int firstNumber, secondNumber;
	firstNumber=InputFirstNumber();
	secondNumber=InputSecondNumber();
	OutputResult(firstNumber+secondNumber);
	return 0;
}

