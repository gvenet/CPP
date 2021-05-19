#include "../inc/main.hpp"

void f0(void)
{
	Sample6 instance;
	cout << "\tnbInst: " << Sample6::getnbInst() << endl;
}

void f1(void)
{
	Sample6 instance;
	cout << "\tnbInst: " << Sample6::getnbInst() << endl;
	f0();
}

int main() {
	Sample1 S1(3.14);
	cout << endl;

	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl << endl;

	Sample2 S2_0('A',25, 1.42);
	cout << endl;

	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl << endl;

	Sample3 S3_0;
	S3_0.publicFoo = 42;
	cout << "\tS3_0.publicFoo: " << S3_0.publicFoo << endl;
	S3_0.publicBar();
	cout << endl;
	
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl << endl;
	Sample4 S4_0(24);
	S4_0.setFoo (42);
	cout << "\tS4_0.getFoo(): " << S4_0.getFoo() << endl;
	S4_0.setFoo (-42);
	cout << "\tS4_0.getFoo(): " << S4_0.getFoo() << endl;
	cout << endl;
	
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl << endl;

	cout << "S5_0.";
	Sample5 S5_0(2);
	cout << "S5_1.";
	Sample5 S5_1(1);
	cout << "\treturn compar _Foo = " << S5_0.compare(&S5_1) << endl;
	cout << endl;

	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl << endl;

	cout << "\tnbInst: " << Sample6::getnbInst() << endl;
	f1();
	cout << "\tnbInst: " << Sample6::getnbInst() << endl;
	cout << endl;
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl << endl;
	return (0);

	
}

