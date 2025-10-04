#include "c4.hpp"

float[42] LookupTable = // Lookup table <- NOTE: is column-major
[
    0.0, 0.1, 0.2, 0.3, 0.4, 0.5,
    0.1, 0.2, 0.3, 0.4, 0.5, 0.6,
    0.2, 0.3, 0.4, 0.5, 0.6, 0.7,
    0.3, 0.4, 0.5, 0.6, 0.7, 0.8,
    0.2, 0.3, 0.4, 0.5, 0.6, 0.7,
    0.1, 0.2, 0.3, 0.4, 0.5, 0.6,
    0.0, 0.1, 0.2, 0.3, 0.4, 0.5
]

int Evaluation(c4::Board& board, c4::Color color)
{
    
}