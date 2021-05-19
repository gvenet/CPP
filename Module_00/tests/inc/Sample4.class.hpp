#ifndef SAMPLE4_CLASS_HPP
#define SAMPLE4_CLASS_HPP

class Sample4
{

public:
	Sample4(int a1);
	~Sample4(void);

	int getFoo(void) const;
	void setFoo(int v);

private:
	int _Foo;

};

#endif
