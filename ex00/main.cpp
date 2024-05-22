#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>

int main()
{
    std::cout << std::endl << RED "---------------------------------------------------"<< std::endl;
	std::cout <<"VECTOR CONTAINER TEST:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    std::vector<int> v;
    for(int i = 1; i < 5; i++)
    {
        v.push_back(i);
    }
    std::cout << std::endl << GREEN "VALUES INSIDE THE VECTOR:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    for(std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        std::cout << "Value inside the container: " << *it << std::endl;
    }
    std::cout << std::endl << GREEN "USING EASYFIND TO FIND 4 AND 5:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    try
    {
        std::cout << easyfind(v, 4) << std::endl;
        std::cout << easyfind(v, 5) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Caught Exception: " << e.what() << std::endl;
    }


    std::cout << std::endl << RED "---------------------------------------------------"<< std::endl;
	std::cout <<"DEQUE CONTAINER TEST:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    std::deque<int> deq;
    for(int i = 1; i < 5; i++)
    {
        deq.push_back(i);
    }
    std::cout << std::endl << GREEN "VALUES INSIDE THE DEQUE:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    for(std::deque<int>::iterator it = deq.begin(); it != deq.end(); it++)
    {
        std::cout << "Value inside the container: " << *it << std::endl;
    }
    std::cout << std::endl << GREEN "USING EASYFIND TO FIND 4 AND 5:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    try
    {
        std::cout << easyfind(deq, 4) << std::endl;
        std::cout << easyfind(deq, 5) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Caught Exception: " << e.what() << std::endl;
    }
    std::cout << std::endl << RED "---------------------------------------------------"<< std::endl;
	std::cout <<"LIST CONTAINER TEST:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    std::list<int> lst;
    for(int i = 1; i < 5; i++)
    {
        lst.push_back(i);
    }
    std::cout << std::endl << GREEN "VALUES INSIDE THE LIST:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    for(std::list<int>::iterator it = lst.begin(); it != lst.end(); it++)
    {
        std::cout << "Value inside the container: " << *it << std::endl;
    }
    std::cout << std::endl << GREEN "USING EASYFIND TO FIND 4 AND 5:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    try
    {
        std::cout << easyfind(lst, 4) << std::endl;
        std::cout << easyfind(lst, 5) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Caught Exception: " << e.what() << std::endl;
    }
    std::cout << std::endl << RED "---------------------------------------------------"<< std::endl;
	std::cout <<"CONST VECTOR CONTAINER TEST:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    std::cout << std::endl << GREEN "USING EASYFIND TO FIND 4 AND 5:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    const std::vector<int> c_v = v;
    try
    {
        std::cout << easyfind(c_v, 4) << std::endl;
        std::cout << easyfind(c_v, 5) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Caught Exception: " << e.what() << std::endl;
    }
    
}
