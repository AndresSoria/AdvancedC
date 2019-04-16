// ConsoleApplication36.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Andres Soria
// April 16th, 2019
// Advanced C++
// Midterm Review.MovieData

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

//1. Create Structures
struct MovieData
{
	string title;
	string director;
	int year;
	int length;
};
//2. Prototype the displayMovie function
void displayMovie(MovieData);

int main()
{
    //1. Variable - MovieData variables
	MovieData movie1;
	MovieData movie2;
	MovieData movie3 = { "Baby Driver", "Edgar Wright", 2017, 112 };

	movie1.title = "Toy Story";
	movie1.director = "John Lasseter";
	movie1.year = 1995;
	movie1.length = 81;

	movie2.title = "Big Trouble in Little China";
	movie2.director = "John Carpenter";
	movie2.year = 1986;
	movie2.length = 99;

	displayMovie(movie1);
	cout << endl;
	displayMovie(movie2);
	cout << endl;
	displayMovie(movie3);
}
///////////Define Functions////////////
void displayMovie(MovieData md)
{
	cout << "\nTitle		:" << md.title;
	cout << "\nDirector		:" << md.director;
	cout << "\nYear			:" << md.year;
	cout << "\nLength		:" << md.length;
}
