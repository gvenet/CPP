#ifndef LOOPSTART_HPP
# define LOOPSTART_HPP

# include "Program.hpp"
# include "Instruction.hpp"

class LoopStart: public Instruction
{
private:
	LoopStart();
public:
	LoopStart(Program &mindOpen);
	LoopStart(LoopStart const &other);
	virtual ~LoopStart();

	LoopStart &operator=(LoopStart const &other);

	void execute(void);
	int getType(void) const;
};

#endif
