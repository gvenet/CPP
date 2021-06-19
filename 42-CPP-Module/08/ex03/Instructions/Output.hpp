
#ifndef OUTPUT_HPP
# define OUTPUT_HPP

# include "Program.hpp"
# include "Instruction.hpp"

class Output: public Instruction
{
private:
	Output();
public:
	Output(Program &mindOpen);
	Output(Output const &other);
	virtual ~Output();

	Output &operator=(Output const &other);

	void execute(void);
	int getType(void) const;
};

#endif
