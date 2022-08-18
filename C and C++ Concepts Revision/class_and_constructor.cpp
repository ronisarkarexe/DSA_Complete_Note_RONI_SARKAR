#include<iostream>

using namespace std;

class Rectangle{
private:
	int length;
	int breath;

public:
	int initialige(int l, int b){
		length=l;
		breath=b;
	}
	//constructure
	Rectangle(int l, int b){
		length=l;
		breath=b;
	}
	
	int area(){
		return length*breath;
	}
	
	int changeLength(int l){
		length=l;
	}

};

int main(){
	Rectangle r;
	Rectangle r(10,5) //constructure
	//r.initialige(10, 5); no need to initialige
	r.initialige(10, 5);
	r.area(r);
	r.changeLength(&r, 20);
	
	return 0;
}
