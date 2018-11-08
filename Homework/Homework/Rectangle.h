/*
 * Rectangle.h
 *
 *  Created on: Oct 27, 2018
 *      Author: gtucpp
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_
using namespace std;

class Rectangle {
private:
	int MCWidth;		//Main Container Rectangle Width
	int MCHeight;		//Main Container Rectangle Height
	int Width;			//Width of Small Rectangle
	int Height;			//Height of Small Rectangle
	int rect_x;			//Initial value of x coordinate for Small Rectangle
	int rect_y;			//Initial value of y coordinate for Small Rectangle

public:

	Rectangle();
	Rectangle(const int, const int, const int, const int);

	void setShape(int, int);

	int getWidth()const;
	int getHeight()const;


	int getX()const;
	int getY()const;

	void Draw(); //Draws Main Container.

};


#endif /* RECTANGLE_H_ */
