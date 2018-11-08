#include "pch.h"
#include<iostream>
#include<fstream>
#include<math.h>
#include<vector>
#include "Circle.h"
#include "ComposedShape.h"
#define sqrt3 1.732050
#define PI 3.14159265
using namespace std;

Circle::Circle(){}

Circle::Circle(int CX, int CY, int Rad) {

	cx = CX;
	cy = CY;
	Radius = Rad;
}

void Circle::setShape(int MCRad) {

	MCRadius = MCRad;
}

int Circle::getShape()const {

	return MCRadius;
}

int Circle::getCX()const {

	return cx;
}

int Circle::getCY()const {

	return cy;
}

void Circle::Draw() {

	fstream F;
	F.open("Shape.svg", ios::out | ios::in | ios::app);
	F.setf(ios::left);

	F << "<svg version=\"1.1\"" << endl
		<< "	baseProfile=\"full\"" << endl
		<< "	xmlns=\"http://www.w3.org/2000/svg\">" << endl << endl
		<< "<circle cx=\"" << MCRadius << "\"" << " cy=\"" << MCRadius << "\"" << " r=\"" << MCRadius << "\"" << " fill=\"green\"/>" << endl;

}
