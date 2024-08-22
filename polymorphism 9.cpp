#include <iostream>
using namespace std;

class animal{
	public:
		virtual void speak(){
			cout<<"animal is speaking"<<endl;
		}
		
		virtual ~animal(){}
};

class cat : public animal{
	public:
		void speak() override{
			cout<<"cat meow"<<endl;
		}
};

class dog: public animal{
	public:
		void speak() override{
			cout<<"dog woofs"<<endl;
		}
};

int main(){
	
	animal * a1 = new cat();
	animal * a2 = new dog();
	
	a1->speak();
	a2->speak();
	
	return 0;
}