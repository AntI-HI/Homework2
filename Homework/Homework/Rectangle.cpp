#include "pch.h"
#include<iostream>
#include<fstream>
#include<math.h>
#include<vector>
#include "Rectangle.h"
#include "ComposedShape.h"
#define sqrt3 1.732050
#define PI 3.14159265
using namespace std;

Rectangle::Rectangle(){}

Rectangle::Rectangle(const int RECT_X, const int RECT_Y, const int WofRect, const int HofRect) {

	rect_x = RECT_X;
	rect_y = RECT_Y;
	Width = WofRect;
	Height = HofRect;
}

int Rectangle::getX()const {

	return rect_x;
}

int Rectangle::getY()const {

	return rect_y;
}

void Rectangle::setShape(int MCWid, int MCHei) {

	MCWidth = MCWid;
	MCHeight = MCHei;
}

int Rectangle::getWidth()const {

	return MCWidth;
}

int Rectangle::getHeight()const {

	return MCHeight;
}

void Rectangle::Draw() {

	fstream F;
	F.open("Shape.svg", ios::out | ios::in | ios::app);
	F.setf(ios::left);

	F << "<svg version=\"1.1\"" << endl
		<< "	baseProfile=\"full\"" << endl
		<< " width=\"" << MCWidth << "\"" << " height=\"" << MCHeight << "\"" << endl
		<< "	xmlns=\"http://www.w3.org/2000/svg\">" << endl << endl
		<< "<rect width=\"" << MCWidth << "\"" << " height=\"" << MCHeight << "\"" << " fill=\"green\"/>" << endl;

}


