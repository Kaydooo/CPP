#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template <class T>
class Array
{
	public:
// --------------------------------- Exception class ------------------------------- //
		class IndexOutOfBoundsException: public std::exception
		{
			const char* what() const throw()
			{
				return ("Index Out Of Bounds !");
			}
		};
// ----------------------------- Constructors ------------------------------ //
		Array()
		{
			this->len = 0;
			elements = new T[len];
		}
		Array(unsigned int i)
		{
			this->elements = new T[i];
			this->len = i;
		}
		Array(Array<T> &src)
		{
			this->len = 0;
			this->elements =new T[0];
			*this = src;
		}
// ------------------------------ Destructor ------------------------------- //
		virtual ~Array() 
		{
			delete [] elements;
		}
// ------------------------------- Operators ------------------------------- //
		T	&operator[](int idx) const
		{
			if(idx >= 0 && static_cast<unsigned int>(idx) < this->len)
				return (elements[idx]);
			throw IndexOutOfBoundsException();
		}
		Array & operator=(Array<T> &rhs)
		{
			if(this != &rhs)
			{
				delete[] this->elements;
				this->len = rhs.len;
				this->elements = new T[this->len];
				for(unsigned int i = 0; i < this->len; i++)
				{
					this->elements[i] = rhs[i];
				}
			}
			return (*this);
		}
// --------------------------------- Methods ------------------------------- //
		unsigned int	size() const
		{
			return (this->len);
		}

	private:
		T				*elements;
		unsigned int	len;
};


#endif /* ARRAY_HPP */
