
#ifndef INSTRUCTION_HPP
# define INSTRUCTION_HPP

class Program;
# include "Program.hpp"

class Instruction
{
private:
	Instruction();
protected:
	Program &mo;
public:
	Instruction(Program &mo);
	Instruction(Instruction const &other);
	virtual ~Instruction();

	Instruction &operator=(Instruction const &other);

	virtual void execute(void) = 0;
	virtual int getType(void) const = 0;
};

#endif
