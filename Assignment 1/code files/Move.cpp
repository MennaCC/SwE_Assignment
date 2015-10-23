#include "Move.h"
#include <iostream>
using namespace std;




//Class Move implementation
//extras
Move Move::add(const Move &m){

	double xRes = m.x + this->x;
	double yRes = m.y + this->y;
	
	return Move(xRes, yRes);
}
void Move::showMove() const{
	cout<<"x: "<<x<<", y: "<<y<<"\n";
}
void Move::reset(double g, double h ){
	x = g;
	y = h;
}
