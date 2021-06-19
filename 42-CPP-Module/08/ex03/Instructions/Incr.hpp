
#ifndef INCR_HPP
# define INCR_HPP

# include "Program.hpp"
# include "Instruction.hpp"

class Incr: public Instruction
{
private:
	Incr();
public:
	Incr(Program &mindOpen);
	Incr(Incr const &other);
	virtual ~Incr();

	Incr &operator=(Incr const &other);

	void execute(void);
	int getType(void) const;
};

#endif
