/**
 * \file
 * \brief 
 *
 * \author
 *   Amelia Urquhart                     \n
 *   Email: amelia.r.urquhart@gmail.com  \n
 * \date   2024-08-23
 *
 * Entry point for the executable. Not used if the program is used as an API.
 */

#include <iostream>

#include "AmeliaSkewT/sounding_window.h"

int main(int argc, char *argv[]) {
    if(argc == 1) {
        std::cout << "Running GUI" << std::endl;
    } else {
        std::cout << "Running CLI. Args are" << std::endl;

        for(int i = 0; i < argc; i++) {
            std::cout << argv[i] << std::endl;
        }
    }

    std::cout << "Figure out intended design before making stuff" << std::endl;

    amelia_skewT::test_namespace_call();

    amelia_skewT::SoundingWindow window;

    std::cout << "window minimum pressure " << window.minimum_pressure << std::endl;
}