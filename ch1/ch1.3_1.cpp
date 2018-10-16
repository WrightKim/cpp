#include <iostream>
using namespace std;

/*
 * function default value -> function overloading
 */

int BoxVolume (int length);
int BoxVolume (int length, int width);
int BoxVolume (int length, int width, int height);

int main (void){
	cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << endl;
	cout << "[5, 5, D] : " << BoxVolume(5, 5) << endl;
	cout << "[7, D, D] : " << BoxVolume(7) << endl;
	
	return 0;
}


int BoxVolume (int length){
	return length;
}

int BoxVolume (int length, int width){
	return length*width;
}

int BoxVolume (int length, int width, int height){
	return length*width*height;
}
