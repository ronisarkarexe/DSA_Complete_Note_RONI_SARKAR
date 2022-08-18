#include<iostream>

using namespace std;

struct Rectangle{
	int length;
	int breath;
};


int area(Rectangle r){
	return r.length*r.breath;
}

int perimeter(Rectangle r){
	return 2*(r.length+r.breath);
}

int initialige(Rectangle *r, int l, int b){
	r->length=l;
	r->breath=b;
}


int main(){
	Rectangle r={0,0};
	
	int l, b;
	printf("Enter length and breadth: ");
	cin>>l>>b;
	
	initialige(&r, l, b);
	
	int a= area(r);
	int peri=perimeter(r);
	
	cout<<a<<" "<<peri;
	return 0;
}
