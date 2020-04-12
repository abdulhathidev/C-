//
//  0001_HeadAndTailRecursion.cpp
//  C++
//
//  Created by Abdul Hathi on 4/11/20.
//  Copyright © 2020 Abdul Hathi. All rights reserved.
//

#include <iostream>
using namespace std;

void HeadRecursion(int n)
{
    if(n > 0)
        HeadRecursion(n-1);
    std::cout<< n << " ";
}

void TailRecursion(int n)
{
    std::cout<< n << " ";
    if(n > 0)
        TailRecursion(n-1);
}

int main()
{
    std::cout << "Head Recursion " << std::endl;
    HeadRecursion(5);
    std::cout << endl;
    std::cout << "Tail Recursion " << std::endl;
    TailRecursion(5);
    std::cout << endl;
}
