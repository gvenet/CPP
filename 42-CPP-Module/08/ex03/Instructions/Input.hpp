
#ifndef INPUT_HPP
# define INPUT_HPP

# include "Program.hpp"
# include "Instruction.hpp"

class Input: public Instruction
{
private:
	Input();
public:
	Input(Program &mindOpen);
	Input(Input const &other);
	virtual ~Input();

	Input &operator=(Input const &other);

	void execute(void);
	int getType(void) const;
};

#endif
