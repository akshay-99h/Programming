//
//  simple_interest.cpp
//  simple interest calculator
//  Enter the rate, principle and time and get the simple interest
//  Created by Akshay on 09/07/18.
//  Copyright © 2018 Pengi Creations. All rights reserved.
//

#include <iostream>
using namespace std                                                       ;

int main() {

    float p,t,r                                                                   ;
    std::cout << "Enter the principle "                           ;
    std::cin >> p                                                             ;
    std::cout <<'\n' << "Enter the time "                        ;
    std::cin >> t                                                              ;
    std::cout <<'\n'                                                         ;
    std::cout <<'\n' << "Enter the rate "                         ;
    std::cin >> r                                                             ;
    std::cout <<'\n' << (p*t*r)/100 << endl << endl     ;
    return 0                                                                    ;

}
/*
    OUTPUT
    Enter the principle 34

    Enter the time 56


    Enter the rate 876

    16679

*/
