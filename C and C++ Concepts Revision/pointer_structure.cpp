#include<iostream>

using namespace std;

struct Rectangle{
	int l;
	int b;
};

int main(){
	
	Rectangle r={10,5};        //nor initilization
	cout<<r.l<<endl<<r.b
	
	Rectangle *p;            //dinamice initilization
	p = new Rectangle;
	p->l = 10;
	p->b = 5;
	
	cout<<p->l<<endl<<p->b;
	
	return 0;
}
