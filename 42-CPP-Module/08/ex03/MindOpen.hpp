
#ifndef MINDOPEN_HPP
# define MINDOPEN_HPP

# include <sstream>
# include <iostream>
# include <fstream>
# include <string>
# include <array>
# include <deque>
# include "Program.hpp"
# include "Instruction.hpp"
# include "Instructions/Incr.hpp"
# include "Instructions/Decr.hpp"
# include "Instructions/IncrPtr.hpp"
# include "Instructions/DecrPtr.hpp"
# include "Instructions/Input.hpp"
# include "Instructions/Output.hpp"
# include "Instructions/LoopStart.hpp"
# include "Instructions/LoopEnd.hpp"

class MindOpen
{
private:
	std::string moriginal;
	Program program;
public:
	MindOpen();
	MindOpen(MindOpen const &other);
	virtual ~MindOpen();

	MindOpen &operator=(MindOpen const &other);

	bool loadFromString(std::string const &str);
	bool loadFromFile(std::string const &filename);

	void execute(void);
};

#endif
