#include <iostream>
#include <vector>

// A template function
template <typename T1>
T1 largest(const T1& n1, const T1& n2, const T1& n3);

// Find the maximum in a vector (template funciton)
template <typename T1>
T1 findMax(std::vector<T1>& v);

// template class
template<typename T1, typename T2>
class Pair {
public:
    Pair(const T1& f, const T2& s) : first(f), second(s) {}
    
    // Getters
    T1 getFirst() const {
        return first;
    }

    T2 getSecond() const {
        return second;
    }

    // Setters
    void setFirst(const T1& first) {
        this->first = first;
    }

    void setSecond(const T2& second) {
        this->second = second;
    }

private:
    T1 first;
    T2 second;
};

// Create a template function that takes 2 arguments of any type and returns a pair of those arguments
template <typename T1, typename T2>
Pair<T1, T2> makePair(const T1& a1, const T1& a2) {
    return Pair<T1, T2>(a1, a2);
}

int main(void) {
    int n1 = 1, n2 = 2, n3 = 5;
    std::cout << largest(n1, n2, n3) << std::endl;

    double d1 = 11.6, d2 = 20.5, d3 = 1.5;
    std::cout << largest(d1, d2, d3) << std::endl;

    char c1 = 'A', c2 = 'Y', c3 = 'b';
    std::cout << largest(c1, c2, c3) << std::endl;

    std::vector<std::string> v = {"Hello", "Bye", "Good Morning"};
    std::cout << findMax(v) << std::endl;

    // Create an object of Pair class
    Pair<int, std::string> p(1, "Yup");
    std::cout << p.getFirst() << std::endl;
    std::cout << p.getSecond() << std::endl;

    std::cout << makePair(2, 5).getFirst() << std::endl;


    return 0;
}

template <typename T1>
T1 largest(const T1& n1, const T1& n2, const T1& n3)
{
    if (n1 >= n2 && n1 >= n3) {
        return n1;
    }
    else if (n2 >= n3) {
        return n2;
    }
    else {
        return n3;
    }
}

template <typename T1>
T1 findMax(std::vector<T1>& v)
{
    if (v.empty()) {
        throw "Empty vector!";
    }

    T1 max = v[0];
    for (const T1& el : v) {
        if (el > max) {
            max = el;
        }
    }   

    return max;
}