/*
** EPITECH PROJECT, 2019
** Work
** File description:
** main
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <iomanip>
#include <cmath>
#include <sys/time.h>

void process()
{
    
}

int main(int ac, char **av)
{
    if (ac >= 2 && (!strcmp(av[1], "-h") || !strcmp(av[1], "-help"))) {
        std::cout << "USAGE" << std::endl;
        std::cout << "\t" << av[0] << " code [...]" << std::endl << std::endl;
        std::cout << "DESCRIPTION" << std::endl;
        std::cout << "\tcode\tcountry code" << std::endl;
        return (0);
    }
    if (ac < 2) {
        std::cerr << "Bad usage." << std::endl;
        return (84);
    }
    return (0);
}
