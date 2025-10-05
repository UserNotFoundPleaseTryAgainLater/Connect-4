#include "lib/c4.hpp"
#include "include/eval.hpp"

int NegaMax(c4::Board& board, int alpha, int beta, int depth)
{
    if (depth == 0) return Evaluation(c4::Board& board, Color::RED);
    int max = std::numeric_limits<int>::min() + 1;
    int score = 0;
    c4::Movelist moves;
    moves.legalMoves(board);
    for (const auto move : moves)
    {
        board.makeMove(move);
        score = -NegaMax(board, depth - 1, -beta, -alpha);
        board.unmakeMove(move);
        if (score > max)
        {
            max = score;
            if (score > alpha) alpha = score;
        }
        if (score >= beta) return max;
    }
    return max;
}