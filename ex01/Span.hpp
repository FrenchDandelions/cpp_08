#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

# define RED "\033[1;31m"
# define RESET "\033[0m"
# define PURP "\033[1;95m"
# define PURP2 "\033[1;35m"
# define ORANGE "\033[1;91m"
# define LIGHTB "\033[1;36m"
# define BLUE "\033[1;94m"
# define GREEN "\033[1;92m"
# define YELLOW "\033[1;93m"

class Span
{
    private:
        Span();
        std::vector<int> _v;
        unsigned int _N;

    public:
        Span(unsigned int N);
        Span(const Span &copy);
        Span& operator=(const Span &copy);
        ~Span();

        void addNumber(int);
        void addBunch(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        unsigned int shortestSpan(void);
        unsigned int longestSpan(void);
        void printVector(void);
};

#endif