#include <iostream>

using namespace std;

class calculateArea {
public:
	virtual void area() {
	}
};

class triangleArea : public calculateArea {
public:
	void area() {
		cout << "The area of triangle " << endl;
	}
};

class rectangleArea :public calculateArea {
public:
	void area() {
		cout << "The area of rectangle " << endl;
	}
};

int main() {
	rectangleArea rect;
	triangleArea triangle;
	
	calculateArea *area1 = &rect;
	calculateArea *area2 = &triangle;

	area1->area();
	area2->area();
}

