#ifndef SAMPLE3_CLASS_HPP
#define SAMPLE3_CLASS_HPP

class Sample3
{

public:
	Sample3(void);
	~Sample3(void);

	int publicFoo;

	void publicBar(void) const;

private:
	int _privateFoo;

	void _privateBar(void) const;
};

#endif
