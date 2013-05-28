#pragma once
//klasa sluzaca do reprezentowania pozycji m.in. na planszy
class Vector{
	double x,y;
	static double epsilon;//dokladnosc 

public:
	Vector(double x,double y);
	Vector();
	~Vector(void){};

	void setEpsilon(double eps){epsilon=eps;}
	void setX(double val){x=val;}
	void setY(double val){y=val;}
	double getX(){return x;}
	double getY(){return y;}

	Vector operator+(const Vector &)const;
	Vector operator-(const Vector &)const;
	Vector& operator=(const Vector &);
	//operator == uwzglednia dopuszczalny blad(epsilon)
	bool operator==(const Vector &)const;
};

