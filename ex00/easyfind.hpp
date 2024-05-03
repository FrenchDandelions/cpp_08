#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <exception>

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
int easyfind(T &container, int to_find)
{
    typename T::iterator it = std::find(container.begin(), container.end(), to_find);
    if(it == container.end())
        throw std::out_of_range("Value not found");
    return(*it);
}

#endif