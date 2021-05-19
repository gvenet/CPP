#ifndef SAMPLE5_CLASS_HPP
#define SAMPLE5_CLASS_HPP

class Sample5
{

public:
	Sample5(int a1);
	~Sample5(void);

	int getFoo(void) const;
	int compare (Sample5 * other) const;

private:
	int _Foo;

};

#endif
