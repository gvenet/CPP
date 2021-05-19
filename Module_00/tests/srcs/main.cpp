#include "../inc/main.hpp"

int main() {
	Sample1 S1(3.14);
	cout << endl;
	Sample2 S2_0('A',25, 1.42);
	cout << endl;
	Sample3 S3_0;
	S3_0.publicFoo = 42;
	cout << "S3_0.publicFoo: " << S3_0.publicFoo << endl;
	S3_0.publicBar();
	cout << endl;
	Sample4 S4_0(24);
	S4_0.setFoo (42);
	cout << "S4_0.getFoo(): " << S4_0.getFoo() << endl;
	S4_0.setFoo (-42);
	cout << "S4_0.getFoo(): " << S4_0.getFoo() << endl;
	cout << "S5_0.";
	Sample5 S5_0(2);
	cout << "S5_1.";
	Sample5 S5_1(1);
	cout << "return compar _Foo = " << S5_0.compare(&S5_1) << endl;
	return (0);

	
}

