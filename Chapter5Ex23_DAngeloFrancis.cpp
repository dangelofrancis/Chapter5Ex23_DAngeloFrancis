/*
TITLE: Chapter 5 Exercise 23 - Pattern Display
FILE NAME: Chapter4Ex23_DAngeloFrancis.cpp
PROGRAMMER: D'Angelo Francis
DATE: November 2024
REQUIREMENTS: 
Create a program that uses a loop to display Pattern A, followed by another loop that displays Pattern B.
*/

#include <iostream>
using namespace std;

// function prototypes
void PatternA();
void PatternB();

int main()
{
	cout << "PATTERN A:\n\n";
	PatternA();
	cout << endl;
	cout << "PATTERN B:\n\n";
	PatternB();
}
void PatternA() // creates pattern A
{
	int rows = 10;

	for (int line = 1; line <= rows; line++)
	{
		for (int plusCount = 0; plusCount < line; plusCount++)
		{
			cout << "+";
		}
		cout << endl;
	}
}
void PatternB() // creates pattern B
{
	int rows = 10;

	for (int line = rows; line > 0; line--)
	{
		for (int plusCount = 0; plusCount < line; plusCount++)
		{
			cout << "+";
		}
		cout << endl;
	}
}