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
        std::vector<int>::const_iterator it = copy._v.begin();
        for(; it != copy._v.end(); it++)
        {
            this->_v.push_back(*it);
        }
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

int Span::longestSpan(void)
{
    if(this->_v.empty() || this->_v.size() <= 1)
        throw std::logic_error("Vector is empty or only has one number, can't find longest span");
    std::sort(this->_v.begin(), this->_v.end());
    return(this->_v.back() - this->_v.front());
}

int Span::shortestSpan(void)
{
    if(this->_v.empty() || this->_v.size() <= 1)
        throw std::logic_error("Vector is empty or only has one number, can't find shortest span");
    std::sort(this->_v.begin(), this->_v.end());
    std::vector<int>::iterator it = this->_v.begin();
    std::vector<int>::iterator it2 = this->_v.begin();
    it2++;
    return(*it2 - *it);
}

Span::~Span()
{
}
