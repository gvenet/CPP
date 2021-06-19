
#ifndef DECRPTR_HPP
# define DECRPTR_HPP

# include "Program.hpp"
# include "Instruction.hpp"

class DecrPtr: public Instruction
{
private:
	DecrPtr();
public:
	DecrPtr(Program &mindOpen);
	DecrPtr(DecrPtr const &other);
	virtual ~DecrPtr();

	DecrPtr &operator=(DecrPtr const &other);

	void execute(void);
	int getType(void) const;
};

#endif
