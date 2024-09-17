
#include "functions declaration.hpp"
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    welcome();
    int difficlty = selectdifficilty();
    string codeword;
    if (difficlty == 1)
    {
        codeword == "cat";
    }
    else if (difficlty == 2)
    {
        codeword = "programmer";
    }
    else
    {
        codeword = "extraordinarily";
    }

    string answer(codeword.length(), '-');
    int attempt = 0;
    vector<char> incorrect;
    bool guess = false;
    char letter;

    while (answer != codeword && attempt < 7)
    {
        displayattempt(attempt);
        displaystatus(incorrect, answer);

        std::cout << "\n\n¬ведите букву: ";
        std::cin >> letter;

        for (int i = 0; i < codeword.length(); i++)
        {
            if (letter == codeword[i])
            {
                answer[i] = letter;
                guess = true;
            }
        }
        if (guess)
        {
            std::cout << "\nверно!\n";
        }
        else
        {
            std::cout << "\nневерно! \n";
            incorrect.push_back(letter);
            attempt++;
        }
        guess = false;
    }

    endgame(answer, codeword);
    return 0;
}
