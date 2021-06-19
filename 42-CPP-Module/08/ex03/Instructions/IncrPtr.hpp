
#ifndef INCRPTR_HPP
# define INCRPTR_HPP

# include "Program.hpp"
# include "Instruction.hpp"

class IncrPtr: public Instruction
{
private:
	IncrPtr();
public:
	IncrPtr(Program &mindOpen);
	IncrPtr(IncrPtr const &other);
	virtual ~IncrPtr();

	IncrPtr &operator=(IncrPtr const &other);

	void execute(void);
	int getType(void) const;
};

#endif
