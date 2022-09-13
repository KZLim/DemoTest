#include <iostream>

using namespace std;

double areaTriangle(double base, double height){
	
	double area = 0.00;
	area = 0.5*base*height;
	return area;

}


int main(){
	
	double base=0.00, height=0.00, areaOfTriangle=0.00;
	
	
	cout<<"Please enter the base of the triangle: ";
	cin>>base;
	
	cout<<"Please enter the height of the triangle: ";
	cin>>height;
	
	areaOfTriangle = areaTriangle(base,height);
	
	cout<<"The area of the triangle is: "<<areaOfTriangle;	
	
	
	return 0;
}
