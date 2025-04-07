#include "Span.hpp"

Span::Span() : N(0){
}

Span::Span(unsigned int N) : N(N){}

Span::~Span(){}

Span::Span(const Span& copy){
    *this = copy;
}

Span &Span::operator=(const Span& copy){
    this->_numbers = copy._numbers;
    this->N = copy.N;
    return *this;
}

void Span::addNumber(int number){
    if (_numbers.size() >= N){
        throw std::out_of_range("Span is full, cannot add more numbers");
    }
    _numbers.push_back(number);
}

/* 
void Span::printNumbers() const {
    std::vector<int>::const_iterator it;
    for (it = _numbers.begin(); it != _numbers.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
} */

int Span::shortestSpan(){
    if (_numbers.size() <= 1) {
            throw std::logic_error("Not enough numbers to find a span");
    }
    std::vector<int> tmp = _numbers;
    std::sort(tmp.begin(), tmp.end());

    int min_span = tmp[1] - tmp[0];

    for (size_t i = 0; i < tmp.size() - 1; ++i){
        int span = tmp[i + 1] - tmp[i];
        if (span < min_span){
            min_span = span;
        }
    }
    return min_span;
}

/* int Span::longestSpan(){
     if (_numbers.size() <= 1) {
            throw std::logic_error("Not enough numbers to find a span");
    }

    std::sort(_numbers.begin(), _numbers.end());

    int max_span = this->_numbers[this->_numbers.size() - 1] - this->_numbers[0];

    return max_span;
} */

void Span::fill(iter begin, iter end){
    iter it;
    for (it = begin; it != end; ++it){
        this->addNumber(*it);
    }
}

int Span::longestSpan() {
    if (_numbers.size() <= 1) {
        throw std::logic_error("Not enough numbers to find a span");
    }

    int min_val = *std::min_element(_numbers.begin(), _numbers.end());
    int max_val = *std::max_element(_numbers.begin(), _numbers.end());

    int max_span = max_val - min_val;

    return max_span;
}


