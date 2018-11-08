#include "pch.h"
#include<iostream>
#include<fstream>
#include<math.h>
#include<vector>
#include "Triangle.h"
#include "ComposedShape.h"
#define sqrt3 1.732050
#define PI 3.14159265
using namespace std;

Triangle::Triangle(){}

Triangle::Triangle(const int leng1_X, const int leng1_Y, const int leng2_X, const int leng2_Y, const int leng3_X, const int leng3_Y) {

	Lengt1_X = leng1_X;
	Lengt1_Y = leng1_Y;
	Lengt2_X = leng2_X;
	Lengt2_Y = leng2_Y;
	Lengt3_X = leng3_X;
	Lengt3_Y = leng3_Y;
}

void Triangle::setShape(int MCTriangle) {

	MCTri = MCTriangle;
}

int Triangle::getShape()const {

	return MCTri;
}

int Triangle::getLeng1_X()const {

	return Lengt1_X;
}

int Triangle::getLeng1_Y()const {

	return Lengt1_Y;
}

int Triangle::getLeng2_X()const {

	return Lengt2_X;
}

int Triangle::getLeng2_Y()const {

	return Lengt2_Y;
}

int Triangle::getLeng3_X()const {

	return Lengt3_X;
}

int Triangle::getLeng3_Y()const {

	return Lengt3_Y;
}

void Triangle::Draw() {

	fstream F;
	F.open("Shape.svg", ios::out | ios::in | ios::app);
	F.setf(ios::left);

	F << "<svg version=\"1.1\"" << endl
		<< "	baseProfile=\"full\"" << endl
		<< "	xmlns=\"http://www.w3.org/2000/svg\">" << endl << endl
		<< "<polygon points=\"" << MCTri / 2 << " " << 0 << ", " << 0 << " " << (int)(MCTri*sqrt3 / 2) << ", " << MCTri << " " << (int)(MCTri*sqrt3 / 2) << "\"" << " fill=\"green\"/>" << endl;

}


