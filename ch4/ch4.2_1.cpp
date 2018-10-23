//p166
#include <iostream>
using namespace std;

class Point {
	private:
		int xpos, ypos;
	public:
		void Init (int x, int y) {
			xpos = x;
			ypos = y;
		}

		void ShowPointInfo() const {
			cout << "[" << xpos << ", " << ypos << "]" << endl;
		}
};

class Circle {
	private:
		int radius;
		Point center;
	public:
		void Init (int xpos, int ypos, int radius) {
			center.Init (xpos, ypos);
			this->radius = radius;
		}

		void ShowCircleInfo() const {
			cout << "radius: " << this->radius << endl;
			center.ShowPointInfo();
		}
};

class Ring {
	private:
		Circle inner;
		Circle outer;
	public:
		void Init (int inX, int inY, int inR, int outX, int outY, int outR) {
			inner.Init (inX, inY, inR);
			outer.Init (outX, outY, outR);
		}
		void ShowRingInfo() {
			cout << "Inner Circle info..." << endl;
			inner.ShowCircleInfo();
			cout << "Outer Circle info..." << endl;
			outer.ShowCircleInfo();
		}
};


int main (void) {
	Ring ring;
	ring.Init (1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();
	return 0;
}
