#include "lib/c4.hpp"

int[42] lookupTable = // NOTE: is column-major
{
    0, 1, 2, 3, 4, 5,
    1, 2, 3, 4, 5, 6,
    2, 3, 4, 5, 6, 7,
    3, 4, 5, 6, 7, 8,
    2, 3, 4, 5, 6, 7,
    1, 2, 3, 4, 5, 6,
    0, 1, 2, 3, 4, 5
};

int Evaluation(c4::Board& board, c4::Color color)
{
    int sum = 0;
    for (int i = 0; i < 42; ++i)
    {
        if (board.getBit(i, color))
            sum += lookupTable[i];
    }
    return sum;
}