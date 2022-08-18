#include<iostream>

using namespace std;

class Rectangle{
private:
	int length;
	int breath;
public:
	int area(){
		return length*breath;
	}
	
	int perimeter(){
		return 2*(length+breath);
	}
	
	int initialige(int l, int b){
		length=l;
		breath=b;
	}
};

int main(){
	Rectangle r;
	
	int l, b;
	printf("Enter length and breadth: ");
	cin>>l>>b;
	
	r.initialige(l, b);
	int a= r.area();
	int peri= r.perimeter();
	
	cout<<a<<" "<<peri;
	return 0;
}
