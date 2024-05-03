#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

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
        int shortestSpan(void);
        int longestSpan(void);
        void printVector(void);
};

#endif