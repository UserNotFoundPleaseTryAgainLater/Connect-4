#include <iostream>
#include <string>
#include "lib/c4.hpp"

void Interface()
{
    std::string command;
    int move;
    std::cin >> command;
    c4::Board board;
    board.show();
    while (command == "go")
    {
        std::cin >> move;
        board.makeMove(move, c4::Color::YELLOW);
        board.show();
        c4::Movelist moves;
        moves.legalMoves(board);
        board.makeMove(moves.getElement(0), c4::Color::RED);
        board.show();
    }
}