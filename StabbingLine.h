#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstdlib>
#include<fstream>
#include <sstream>
#define MAXARRAYSIZE 500
#include <vector>
#include <string>
#pragma once
using namespace std;

typedef int PointId;
typedef int LineId;
struct Point{
	PointId Pid;
	int XCord;
	int YCord;
};

struct Line{
	LineId Lid;
	PointId P1;
	PointId P2;
};
// Declaring the prototype functions

void readPoints(ifstream& inPutPointFile, Point pointsArray[],
const int MaxPntsSize, int& numPoints);

void readLines(ifstream& inPutLineFile, Line linesArray[],
const int MaxLnsSize, int& numLines);
void printLineByCoords(LineId lid, Line linesArray[], const int MaxLnsSize, Point pointsArray[], 
const int MaxPntsSize);
void getStabbedLines (const int xcoord, Line linesArray[], const int MaxLnsSize, const int NumLines,  Point pointsArray[],const int MaxPtsSize, Line stabbedLines[],
const int MaxStbSize, int& NumOfStbLines);

