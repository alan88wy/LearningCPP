//
//  main.cpp
//  LearningCPP
//
//  Created by Alan Wan on 29/8/20.
//  Copyright © 2020 Alan Wan. All rights reserved.
//

#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

template <typename T>   // Template function
T maxof (T a, T b) {
  return (a > b ? a: b);
}

template <class T>      // Template Class
class tClass {
private:
    static const int maxValue { 100 };
public:
        
};

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int k {5};                      // Initialize to 5
    int l (10);
    int m { k + l};
    unsigned int n {30ul};
    unsigned int o {0xffffff};     // Hexadecimal 16777215
    unsigned int p {0B110101111};  // Binary 431
    
    std::cout << "Hello, World!\n";
    std::cout << "Value of k is : " << k << std::endl;
    std::cout << "Value of l is : " << l << std::endl;
    std::cout << "Value of m is : " << m << std::endl;
    std::cout << "Value of n is : " << n << std::endl;
    std::cout << "Value of o is : " << o << std::endl;
    std::cout << "Value of p is : " << p << std::endl;
    
    double r {(double) m / 2 };
    std::cout << "Value of r is : " << r << std::endl;
    
    int j = maxof<int>(7, 9);
    cout << "max is : " << j << endl;
    
    string sclass = string("This is a string");
    
    for (auto it = sclass.begin(); it!=sclass.end(); it++ ) {
        std::cout << *it << " ";
    }
    
    std::cout << endl;
    
    return 0;
}
