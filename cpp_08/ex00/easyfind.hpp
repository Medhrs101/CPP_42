#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <exception>

class NotExistException : public std::exception
{
		virtual const char* what() const throw();
};

class ExistException : public std::exception
{
		virtual const char* what() const throw();
};

#endif
