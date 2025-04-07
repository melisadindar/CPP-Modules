#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

typedef std::vector<int>::iterator iter;
#define len 10000

class Span{
    private:
        unsigned int N;
        std::vector<int> _numbers;
    
    public:
        Span();
        Span(unsigned int N);
        ~Span();
        Span(const Span& copy);
        Span &operator=(const Span& copy);
        void addNumber(int number);
        int shortestSpan();
        int longestSpan();
        void fill(iter begin, iter end);
        //void printNumbers() const;
};

#endif