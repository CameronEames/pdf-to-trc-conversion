// PDF to TRC Conversion.cpp : Defines the entry point for the console application.
//////////////////////////////////////////////////////////////////////////////////
// Made by Cameron Eames and Matt Engesser
// Purpose: To take in the TRC .pdf file and parse through it, 
// spitting out any data needed for TRC compliance for Paragon(tm)
// <Insert legal mumbo jumbo here idk man>
//////////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	cout << "My name is Matt Engesser and I am lame, type kill me if you agree\n\n\nEnter input: ";
	getline(cin, input);
	if (input == "kill me")
		cout << "yeah right you live on this eternal plane for all eternity\n\n";
	else cout << "idfk i hate my life\n\n";

	system("pause");

    return 0;
}

