#include <iostream>

using namespace std;
template<typename t>
class point{
	t x;
	public :
		point(t =0);
		~point();
		void setX(t );
		t getX(){ return x;}
		point operator+(point);



};
template<typename t>
point<t> :: point(t x){
	this->x=x;


}
template<typename t>
point<t> :: ~point(){



}
template<typename t>
void point<t> :: setX(t x){

	this->x=x;

}
template<typename t>
point<t> point<t> :: operator+(point a){
	point tmp;
	tmp.setX(this->getX()+a.getX());

	return tmp;


}
void operation(){

	point<double> p1(10.5);
	point<double> p2(12.1);
	point<double> p3=p1+p2;
	cout<<p1.getX()<<endl;
	cout<<p2.getX()<<endl;
	cout<<p3.getX()<<endl;


}
int main(){

	operation();


}
