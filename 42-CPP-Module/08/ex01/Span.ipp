
template<typename InputIterator>
void Span::addNumber(InputIterator begin, InputIterator end)
{
	if (this->numbers.size() + std::distance(begin, end) > this->max)
		throw Span::FullSpanException();
	this->numbers.insert(begin, end);
}
