/*
 * Circle.h
 *
 *  Created on: Oct 27, 2018
 *      Author: gtucpp
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_
using namespace std;

class Circle {
private:
	int MCRadius;	//Big Radius	
	int Radius;		//Little Radius
	int cx;		//Center of x coordinate for Small Circle
	int cy;		//Center of y coordinate for Small Circle
public:

	Circle();
	Circle(int, int, int);

	void setShape(int);

	int getShape()const;

	int getCX()const;
	int getCY()const;

	void Draw();	//Draws Main Container.

};

#endif /* CIRCLE_H_ */
