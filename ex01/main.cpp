#include "Span.hpp"

int main()
{
    try
    {
        std::cout << std::endl << RED "---------------------------------------------------"<< std::endl;
	    std::cout <<"TEST GIVEN MAIN:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << std::endl << GREEN "VALUES INSIDE THE VECTOR:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        sp.printVector();
        std::cout << std::endl << GREEN "SHORTEST SPAN:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << std::endl << GREEN "LONGEST SPAN:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        std::cout << std::endl << RED "---------------------------------------------------"<< std::endl;
	    std::cout <<"TEST BUNCH FUNCTION:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        Span sp2 = Span(10000);
        std::vector<int> v;
        for(int i = 0; i < 10000; i++)
        {
            v.push_back(i + 1);
        }
        sp2.addBunch(v.begin(), v.end());
        // sp2.printVector();
        std::cout << std::endl << GREEN "SHORTEST SPAN:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cout << sp2.shortestSpan() << std::endl;
        std::cout << std::endl << GREEN "LONGEST SPAN:" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        std::cout << sp2.longestSpan() << std::endl;
        std::cout << std::endl << RED "---------------------------------------------------"<< std::endl;
	    std::cout <<"TEST EXCEPTION :" << std::endl;
	    std::cout << "---------------------------------------------------" RESET << std::endl;
        Span sp3 = Span(1000);
        std::vector<int> v2;
        for(int i = 0; i < 10000; i++)
        {
            v2.push_back(i + 1);
        }
        sp3.addBunch(v.begin(), v.end());
        // sp2.printVector();
        std::cout << sp3.shortestSpan() << std::endl;
        std::cout << sp3.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl << std::endl;
    }
    
    
    return 0;
}
