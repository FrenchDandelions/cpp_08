#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

# define RED "\033[1;31m"
# define RESET "\033[0m"
# define PURP "\033[1;95m"
# define PURP2 "\033[1;35m"
# define ORANGE "\033[1;91m"
# define LIGHTB "\033[1;36m"
# define BLUE "\033[1;94m"
# define GREEN "\033[1;92m"
# define YELLOW "\033[1;93m"


template <typename T>
struct MutantStack : virtual public std::stack<T> 
{
    private:

    public:
        typedef typename MutantStack<T>::container_type::iterator iterator;
        typedef typename MutantStack<T>::container_type::reverse_iterator reverse_iterator;

        MutantStack();
        ~MutantStack();

        iterator begin();
        iterator end();
        reverse_iterator rbegin();
        reverse_iterator rend();
};

template <typename T>
MutantStack<T>::MutantStack()
{
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return(this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return(this->c.end());
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin()
{
    return(this->c.rbegin());
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend()
{
    return(this->c.rend());
}

#endif