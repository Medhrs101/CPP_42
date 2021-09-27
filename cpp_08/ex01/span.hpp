#ifndef SPAN_HPP
#define SPAN_HPP
#include <list>
#include <iostream>
#include <vector>
#include <iostream>
#include <algorithm>

class span
{
private:
	unsigned int _N;
	std::vector<int> arr;
public:
	span();
	span(unsigned int N);
	span(span const &);
	span&	operator=(span const &);
	int		shortestSpan();
	int		longestSpan();
	void	addNumber(int n);
	template <typename T>
	void	addNumber(T a, T b)
	{
		if (_N < arr.size() + std::distance(a, b))
			throw NoSpaceException();
		arr.insert(arr.end(), a, b);
	}
	class NoSpaceException : public std::exception
	{
			virtual const char* what() const throw();
	};
	class NoSpanException : public std::exception
	{
			virtual const char* what() const throw();
	};
	~span();
};

#endif /* SPAN_HPP */
