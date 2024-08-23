/**
 * \file
 * \brief Header for the sounding window struct
 *
 * \author
 *   Amelia Urquhart                     \n
 *   Email: amelia.r.urquhart@gmail.com  \n
 * \date   2024-08-23
 *
 * Defines struct for sounding window and some parameter defaults
 */

#ifndef __SOUNDING_WINDOW_H__
#define __SOUNDING_WINDOW_H__

#include <list>
#include <string>

#include "parcel_trajectory.h"
#include "SHARPlib/constants.h"
#include "SHARPlib/profile.h"

namespace amelia_skewT {
    struct SoundingWindow {
        // temperature range is for bottom edge of skew-T
        float minimum_temperature = -50 + sharp::ZEROCNK;
        float maximum_temperature = 50 + sharp::ZEROCNK;
        float minimum_pressure = 100 * sharp::HPA_TO_PA;
        float maximum_pressure = 1100 * sharp::HPA_TO_PA;

        float skew_factor = 0.75; // figure out what units are later

        std::string window_title = "";

        // allows for the visualization of multiple profiles at once
        // like sounderpy does
        // std::list<sharp::Profile> profiles = {};

        // figure out exact design considerations before moving too far
        std::list<ParcelTrajectory> parcels = {};
    };
}

#endif // __SOUNDING_WINDOW_H__