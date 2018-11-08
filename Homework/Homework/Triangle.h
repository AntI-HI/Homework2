/*
 * Triangle.h
 *
 *  Created on: Oct 27, 2018
 *      Author: gtucpp
 */

#ifndef TRIANGLE_H_
#define TRIANGLE_H_
using namespace std;

class Triangle {
private:
	int MCTri;		//Length of Main Container Triangle
	int LofTri;		//Length if Small Triangle
	int Lengt1_X, Lengt1_Y, Lengt2_X, Lengt2_Y, Lengt3_X, Lengt3_Y;	//Polygon parameters of Small Triangle

public:

	Triangle();
	Triangle(const int, const int, const int, const int, const int, const int);

	void setShape(int);

	int getShape()const;

	int getLeng1_X()const;
	int getLeng1_Y()const;
	int getLeng2_X()const;
	int getLeng2_Y()const;
	int getLeng3_X()const;
	int getLeng3_Y()const;

	void Draw();	//Draws Main Container.

};

#endif /* TRIANGLE_H_ */
