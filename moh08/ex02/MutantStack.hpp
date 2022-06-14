/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-guna <mal-guna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 04:38:52 by mal-guna          #+#    #+#             */
/*   Updated: 2022/06/14 09:12:24 by mal-guna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

#define RED "\033[0;31m"
#define GREEN "\033[1;32m"
#define CYAN "\033[0;36m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"

template <class T>
class MutantStack : public std::stack<T>
{
    public:
    /* Container_type is a typedef for _Sequence which is a typedef for deque<_Tp> > , the underlying type of stack */
        typedef typename std::stack<T>::container_type::iterator iterator;
    // ----------------------------- Constructors ------------------------------ //
        MutantStack<T>(): std::stack<T>(){}
        MutantStack(MutantStack &other){*this = other;}
    // ------------------------------ Destructor ------------------------------- //
        virtual ~MutantStack<T>(){};
    // ------------------------------- Operators ------------------------------- //
    	MutantStack<T>	&operator=(MutantStack<T> const &rhs)
		{
            if(this != &rhs)
			    this->c = rhs.c;
			return *this;
		}
    // --------------------------------- Methods ------------------------------- //
        const   iterator    begin(){return (this->c.begin());}
        const   iterator    end(){return (this->c.end());}
    // --------------------------- Getters && Setters -------------------------- //
};

#endif /* MUTANTSTACK_HPP */
