#include<iostream>

using namespace std;

struct Rectangle{
	int l;
	int b;
};

int main(){
	
//	struct Rectangle r; only declaration
	struct Rectangle r={10, 5}; // declaration and initialization
	
	// we can use it initialization others way also
	r.l = 10;
	r.b = 5;
	
	cout<<r.l<<endl;
	cout<<r.b;
	
	// array of structure
	struct Rectangule r[10] = {{1,2},{2,3},{4,5}..so on};
	cout<<r[0].l;
	cout<<r[0].b;
	
	return 0;
}
