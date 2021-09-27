/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 14:44:58 by moharras          #+#    #+#             */
/*   Updated: 2021/09/16 16:10:29 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
class Base
{
public:
	virtual ~Base(){};
};

class A : public Base
{
	
};

class B : public Base
{
	
};

class C : public Base
{
	
};

Base*   generate( void )
{
	  srand((unsigned) time(0));
	int result = 1 + (rand() % 3);
	Base *K;
	switch (result)
	{
		case 1:
			std::cout << "Creat new A" << std::endl;
			K = new A;
			break;
		case 2:
			std::cout << "Creat new B" << std::endl;
			K = new B;
			break;
		case 3:
			std::cout << "Creat new C" << std::endl;
			K = new C;
			break;
	}
	return (K);
}

void identify(Base *p)
{
	A   *a;
	B   *b;
	C   *c;
	std::cout << "Pointer: ";
	a = dynamic_cast<A*>(p);

	if (a != nullptr)
	{
		std::cout << "A" << std::endl;
		return;
	}
	b = dynamic_cast<B*>(p);
	if (b != nullptr)
	{
		std::cout << "B" << std::endl;
		return;
	}
	c = dynamic_cast<C*>(p);
	if (c != nullptr)
	{
		std::cout << "C" << std::endl;
		return;
	}
	else
	{
		std::cout << "Error" << std::endl;
	}
}

void identify(Base &p)
{
	A   a;
	B   b;
	C   c;
	std::cout << "Ref: ";
	try
	{
		a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			b = dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
		}
		catch(const std::exception& e)
		{
			try
			{
				c = dynamic_cast<C&>(p);
				std::cout << "C" << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cout << "Error" << std::endl;
			}
		}
	}
}

int main()
{
	Base *k(generate());
	
	identify (k);
	identify (*k);

	std::cout << "************Error Case***********" << std::endl;
   
	class Error: public Base{};
	
	Base *Er = new(Error);
	identify(Er);
	identify(*Er);
	delete Er;
	delete k;
	return (0);
}