
#include "functions declaration.hpp"
using namespace std;

void welcome()
{
    std::cout << "=====================\n";
        std::cout << "\tВиселица\n";
    std::cout << "=====================\n";
    std::cout << "Правила: Отгадайте загаданное слово до того как виселица будет нарисована.\n";
}
int selectdifficilty()
{
    int difficlty=0;
    std::cout << "Выберите уровень сложности: 2) лёгкий 3) тяжёлый";
    std::cin >> difficlty;
    system("cls");
    return difficlty;
    int attempt=0;
    if (attempt == 0)
    {
        std::cout << "  +---+ \n";
        std::cout << "  |   | \n";
        std::cout << "      | \n";
        std::cout << "      | \n";
        std::cout << "      | \n";
        std::cout << "      | \n";
        std::cout << " ========= \n";
    }
    else if (attempt == 1)
    {
        std::cout << "  +---+ \n";
        std::cout << "  |   | \n";
        std::cout << "  O   | \n";
        std::cout << "      | \n";
        std::cout << "      | \n";
        std::cout << "      | \n";
        std::cout << " ========= \n";
    }
    else if (attempt == 2)
    {
        std::cout << "  +---+ \n";
        std::cout << "  |   | \n";
        std::cout << "  O   | \n";
        std::cout << "  |   | \n";
        std::cout << "      | \n";
        std::cout << "      | \n";
        std::cout << " ========= \n";
    }
    else if (attempt == 3)
    {
        std::cout << "  +---+ \n";
        std::cout << "  |   | \n";
        std::cout << "  O   | \n";
        std::cout << " /|   | \n";
        std::cout << "      | \n";
        std::cout << "      | \n";
        std::cout << " ========= \n";
    }
    else if (attempt == 4)
    {
        std::cout << "  +---+ \n";
        std::cout << "  |   | \n";
        std::cout << "  O   | \n";
        std::cout << " /|\\  | \n";
        std::cout << "      | \n";
        std::cout << "      | \n";
        std::cout << " ========= \n";
    }
    else if (attempt == 5)
    {
        std::cout << "  +---+ \n";
        std::cout << "  |   | \n";
        std::cout << "  O   | \n";
        std::cout << " /|\\  | \n";
        std::cout << " /    | \n";
        std::cout << "      | \n";
        std::cout << " ========= \n";
    }
    else if (attempt == 6)
    {
        std::cout << "  +---+ \n";
        std::cout << "  |   | \n";
        std::cout << "  O   | \n";
        std::cout << " /|\\  | \n";
        std::cout << " / \\  | \n";
        std::cout << "      | \n";
        std::cout << " ========= \n";
    }
}

void displayattempt(int attempt)
{
    if (attempt == 0)
    {
        std::cout << "  +---+ \n";
        std::cout << "  |   | \n";
        std::cout << "      | \n";
        std::cout << "      | \n";
        std::cout << "      | \n";
        std::cout << "      | \n";
        std::cout << " ========= \n";
    }
    else if (attempt == 1)
    {
        std::cout << "  +---+ \n";
        std::cout << "  |   | \n";
        std::cout << "  O   | \n";
        std::cout << "      | \n";
        std::cout << "      | \n";
        std::cout << "      | \n";
        std::cout << " ========= \n";
    }
    else if (attempt == 2)
    {
        std::cout << "  +---+ \n";
        std::cout << "  |   | \n";
        std::cout << "  O   | \n";
        std::cout << "  |   | \n";
        std::cout << "      | \n";
        std::cout << "      | \n";
        std::cout << " ========= \n";
    }
    else if (attempt == 3)
    {
        std::cout << "  +---+ \n";
        std::cout << "  |   | \n";
        std::cout << "  O   | \n";
        std::cout << " /|   | \n";
        std::cout << "      | \n";
        std::cout << "      | \n";
        std::cout << " ========= \n";
    }
    else if (attempt == 4)
    {
        std::cout << "  +---+ \n";
        std::cout << "  |   | \n";
        std::cout << "  O   | \n";
        std::cout << " /|\\  | \n";
        std::cout << "      | \n";
        std::cout << "      | \n";
        std::cout << " ========= \n";
    }
    else if (attempt == 5)
    {
        std::cout << "  +---+ \n";
        std::cout << "  |   | \n";
        std::cout << "  O   | \n";
        std::cout << " /|\\  | \n";
        std::cout << " /    | \n";
        std::cout << "      | \n";
        std::cout << " ========= \n";
    }
    else if (attempt == 6)
    {
        std::cout << "  +---+ \n";
        std::cout << "  |   | \n";
        std::cout << "  O   | \n";
        std::cout << " /|\\  | \n";
        std::cout << " / \\  | \n";
        std::cout << "      | \n";
        std::cout << " ========= \n";
    }
}

void displaystatus(vector<char> incorrect, string answer)
{
    for (int i = 0; i < incorrect.size(); i++)
    {
        std::cout << incorrect[i] << " ";
    }

    std::cout << "\nЗагаданное слово:\n";

    for (int i = 0; i < answer.length(); i++)
    {
        std::cout << answer[i] << " ";
    }
}

void endgame(string answer, string codeword)
{
    if (answer == codeword)
    {
        std::cout << "Вы победили\n";
        std::cout << "Поздравляем!\n";
    }
    else
    {
        std::cout << "Вы проиграли!\n";
        std::cout << "загаданное слово:"<<codeword;
    }
}
