#include <cmath>
#include "Okrag.hpp"

namespace Zadanie {
    Okrag::Okrag(float r)
            : mR(r) {
    }

    float Okrag::area() {
        return static_cast<float>(M_PI * mR * mR);
    }

    float Okrag::length() {
        return static_cast<float>(M_PI * mR * 2);
    }

    bool Okrag::validate(float r) {
        if (r > 0)
            return true;
        else
            return false;
    }

}
