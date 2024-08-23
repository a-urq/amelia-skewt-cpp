/**
 * \file
 * \brief 
 *
 * \author
 *   Amelia Urquhart                     \n
 *   Email: amelia.r.urquhart@gmail.com  \n
 * \date   2024-08-23
 *
 * 
 */

#include <iostream>

#include "AmeliaSkewT/parcel_trajectory.h"
#include "SHARPlib/constants.h"

void amelia_skewT::test_namespace_call() {
    std::cout << "Called from amelia_skewT namespace successfully: " << sharp::GRAVITY << std::endl;
}