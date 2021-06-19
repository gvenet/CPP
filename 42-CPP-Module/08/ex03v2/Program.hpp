
#ifndef PROGRAM_HPP
# define PROGRAM_HPP

# include <iostream>
# include <array>
# include <deque>
# include <vector>

class Program
{
private:
	size_t curr;
	int pointer;
	int stackSize;
	std::vector<char> stack;
	std::deque<int> instructions;
	std::vector<int> loops;
public:
	Program(int stackSize=30000);
	Program(Program const &other);
	virtual ~Program();

	Program &operator=(Program const &other);

	void addInstruction(int instruction);
	void setLoops(int instr);
	void addLoop(int start, int end);
	int moveToNextLoop(int start, int size);


	void executeInstruction(int instruction);
	void execute(void);

	enum InstructionType {
		IncrData,
		IncrPtr,
		DecrData,
		DecrPtr,
		Input,
		Output,
		LoopStart,
		LoopEnd
	};
};

#endif
