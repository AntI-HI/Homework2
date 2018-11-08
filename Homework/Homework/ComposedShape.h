/*
 * ComposedShape.h
 *
 *  Created on: Oct 27, 2018
 *      Author: gtucpp
 */

#ifndef COMPOSEDSHAPE_H_
#define COMPOSEDSHAPE_H_
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include <vector>
using namespace std;

class ComposedShape {
private:
	int Radius;		//Radius of small Circle.
	int WofRect;	//Width of small Rectangle
	int HofRect;	//Height of small Rectangle	
	int LofTri;		//One side Lenght of small eqilateral Triangle
	
	Rectangle Rect;
	Circle Circ;
	Triangle Tria;

	vector<Circle> SetofCirc;
	vector<Rectangle> SetofRect;
	vector<Triangle> SetofTri;

public:

	ComposedShape() {};
	ComposedShape(const Rectangle&, const char );
	ComposedShape(const Circle&, const char );
	ComposedShape(const Triangle&, const char );

	void optimalFit(const Circle&, char);
	void optimalFit(const Rectangle&, char);
	void optimalFit(const Triangle&, char);

	void Draw(const char);

	void modifySShape(const char);		//Modify Small Shape

};


#endif /* COMPOSEDSHAPE_H_ */
	