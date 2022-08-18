#include<iostream>

using namespace std;

struct Rectangle{
	int l;
	int b;
};

//callby value structure
int fun(Rectangle r){
	r.l=30;
	cout<<r.l<<" "<<r.b<<endl;
}

//callby value address
int fun2(Rectangle *r){
	r->l=30;
	cout<<r->l<<" "<<r->b<<endl;
}


//return value address of a structure
Rectangle * fun4(){
	Rectangle *p;
	p = new Rectangle;
	p->l = 15;
	p->b = 7;
	return p;
}

int main(){
	
	Rectangle r={10, 5};
	Rectangle *p=fun4();
	//fun(r);
	//fun2(&r);
	cout<<r.l<<" "<<r.b<<endl;
	cout<<p->l<<" "<<p->b;
	return 0;
}
