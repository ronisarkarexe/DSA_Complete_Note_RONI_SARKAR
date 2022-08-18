#include<iostream>

using namespace std;

struct Rectangle{
	int length;
	int breath;
};

int initialige(Rectangle *r, int l, int b){
	r->length=l;
	r->breath=b;
}

int area(Rectangle r){
	return r.length*r.breath;
}

int changeLength(Rectangle *r, int l){
	r->length=l;
}


int main(){
	Rectangle r;
	initialige(&r, 10, 5);
	area(r)
	changeLength(&r, 20)
	
	return 0;
}
