#include "Span.hpp"

Span::Span()
{
}

Span::Span(unsigned int N)
{
    this->_N = N;
}

Span::Span(const Span &copy)
{
    this->operator=(copy);
}

Span& Span::operator=(const Span &copy)
{
    if(this != &copy)
    {
        this->_N = copy._N;
        this->_v.operator=(copy._v);
    }
    return(*this);
}

void Span::addNumber(int nb)
{
    if(this->_v.size() < this->_N)
        this->_v.push_back(nb);
    else
        throw std::length_error("Vector is full, you can't add any more numbers");
}

void Span::addBunch(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    for(std::vector<int>::iterator it = begin; it != end; it++)
    {
        this->addNumber(*it);
    }
}

void Span::printVector(void)
{
    int i = 0;
    for(std::vector<int>::iterator it = this->_v.begin(); it != this->_v.end(); it++)
    {
        std::cout << "Vector[" << i <<"] = " << *it << std::endl;
        i++;
    }
}

unsigned int Span::longestSpan(void)
{
    if(this->_v.empty() || this->_v.size() <= 1)
        throw std::logic_error("Vector is empty or only has one number, can't find longest span");
    std::vector<int> v = this->_v;
    std::sort(v.begin(), v.end());
    return(std::abs(v.back() - v.front()));
}

unsigned int Span::shortestSpan(void)
{
    if(this->_v.empty() || this->_v.size() <= 1)
        throw std::logic_error("Vector is empty or only has one number, can't find shortest span");
    std::vector<int> v = this->_v;
    std::sort(v.begin(), v.end());
    std::vector<int>::iterator it = v.begin();
    int min = std::abs((*(it + 1)) - *it);
    for(; it+1 != v.end(); it ++)
    {
        if(min > std::abs((*(it + 1)) - *it))
            min = std::abs((*(it + 1)) - *it);
    }
    return(min);
}

Span::~Span()
{
}
