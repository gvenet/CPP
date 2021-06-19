
#ifndef DECR_HPP
# define DECR_HPP

# include "Program.hpp"
# include "Instruction.hpp"

class Decr: public Instruction
{
private:
	Decr();
public:
	Decr(Program &mindOpen);
	Decr(Decr const &other);
	virtual ~Decr();

	Decr &operator=(Decr const &other);

	void execute(void);
	int getType(void) const;
};

#endif
