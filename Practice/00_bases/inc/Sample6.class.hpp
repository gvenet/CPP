#ifndef SAMPLE6_CLASS_HPP
#define SAMPLE6_CLASS_HPP

class Sample6
{

public:
	Sample6(void);
	~Sample6(void);

	static int getnbInst(void);

private:
	static int _nbInst;

};

#endif
