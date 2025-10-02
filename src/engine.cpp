#include "c4.hpp"

int NegaMax(c4::Board& board, int alpha, int beta, int depth)
{
    if (depth == 0) return Evaluation(c4::Board& board);
    int max = std::numeric_limits<int> + 1;
    int score = 0;
    c4::Movelist moves;
    moves.legalMoves(board);
    for (const auto move : moves)
    {
        board.makeMove(move);
        score = -NegaMax(depth - 1, -beta, -alpha);
        if (score > max)
        {
            max = score;
            if (score)
        }
    }
    return max;
}