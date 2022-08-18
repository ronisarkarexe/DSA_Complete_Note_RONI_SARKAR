#include<iostream>

using namespace std;

class Rectangle{
	
private:
	int length;
	int breath;
	
public:
	Rectangle(){
		length=0;
		breath=0;
	}
	
	Rectangle(int l, int b){
		length=l;
		breath=b;
	}
	
	int area(){
		return length*breath;
	}
	
	int perimeter(){
		return 2*(length+breath);
	}
	
	int setLength(int l){
		length=l;
	}
	
	int setBreadth(int b){
		breath=b;
	}
	
	int getLength(){
		return length;
	}
	
	int getBreadth(){
		return breath;
	}
	~Rectangle(){
		cout<<"Destructor";
	}
};

int main(){
	Rectangle r(10,5);
	
//	int l, b;
//	printf("Enter length and breadth: ");
//	cin>>l>>b;
	
	//r.initialige(l, b);
	int a= r.area();
	int peri= r.perimeter();
	
	cout<<a<<" "<<peri;
	return 0;
}
