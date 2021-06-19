
#ifndef LOOPEND_HPP
# define LOOPEND_HPP

# include "Program.hpp"
# include "Instruction.hpp"

class LoopEnd: public Instruction
{
private:
	LoopEnd();
public:
	LoopEnd(Program &mindOpen);
	LoopEnd(LoopEnd const &other);
	virtual ~LoopEnd();

	LoopEnd &operator=(LoopEnd const &other);

	void execute(void);
	int getType(void) const;
};

#endif
