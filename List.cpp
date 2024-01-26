#include "List.hpp"

#include <iostream>

using namespace std;

List::List()
{
    v = 1;
    w = false;
}

List::~List()
{
    std::cout << "Inside destructor" << std::endl;
}

void List::Intialize()
{
    cout << "Starting" << endl;
}