#include "Vector.h"
double Vector::epsilon = 0;
Vector::Vector(double x,double y):x(x),y(y){
}
Vector::Vector(){
	x=0;
	y=0;
}

Vector Vector::operator+(const Vector &right)const
{
	return Vector(x + right.x, y + right.y);
}

Vector Vector::operator-(const Vector &right)const
{
	return Vector(x - right.x, y - right.y);
}


Vector& Vector::operator=(const Vector &right)
{
	x=right.x;
	y=right.y;
	return *this;
}
bool Vector::operator==( const Vector &right) const
{
	return ((x >= right.x-epsilon &&x <= right.x+epsilon) && (y >= right.y-epsilon && y <= right.y+epsilon));
}