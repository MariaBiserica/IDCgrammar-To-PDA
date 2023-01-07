#include <iostream>

#include "Grammar.h"

void printMenu() {
    std::cout << "---MENU---\n";
    std::cout << "0. Exit\n";
    std::cout << "1. Print Grammar.\n";
    std::cout << "2. Generate N words in the grammar.\n";
    std::cout << "3. Print the simplified grammar.\n";
    std::cout << "4. Print the grammar in FNG.\n";
    std::cout << "5. Generate word in grammar and check if the automaton accepts it.\n";
    std::cout << "6. Check if a word is accepted by the automaton.\n";
}

int main()
{
    //reading grammar
    Grammar g;
    //checking if it is valid & an IDC
    g.ReadGrammar();
    if (g.VerifyGrammar() && g.IsContextFree()) {
        //generating the Push-Down automaton
        //todo

        int option;
        const uint8_t exitOptionNo = 0;
        const uint8_t printGrammarOptionNo = 1;
        const uint8_t generateNWordsOptionNo = 2;
        const uint8_t generateSimplifiedGrammarOptionNo = 3;
        const uint8_t generateFNGForGrammarOptionNo = 4;
        const uint8_t generateWordInGrammarAndCheckInAutomatonOptionNo = 5;
        const uint8_t checkSTDINWordInAutomatonOptionNo = 6;

        //menu implementation
        int numWords;
        std::string word;
        do {
            printMenu();
            std::cout << "Please enter an option: ";
            std::cin >> option;
            switch (option)
            {
            case printGrammarOptionNo:
                g.PrintGrammar();
                break;
            case generateNWordsOptionNo:
                std::cout << "Please input how many words to generate: ";
                std::cin >> numWords;
                for (int i = 0; i < numWords; i++) {
                    std::cout << "WORD #" << i << std::endl;
                    g.GenerateWord();
                }
                break;
            case generateSimplifiedGrammarOptionNo:
                break;
            case generateFNGForGrammarOptionNo:
                break;
            case generateWordInGrammarAndCheckInAutomatonOptionNo:
                break;
            case checkSTDINWordInAutomatonOptionNo:
                break;
            case 0:
                break;
            default:
                std::cerr << "Invalid option. Try again." << std::endl;
                break;
            }
        } while (option != exitOptionNo);
    }
    else {
        std::cout << "Grammar is not valid or regular.\n";
    }

    //std::cout << "VerifyGrammar: " << g.VerifyGrammar() << std::endl;
    //std::cout << "IsRegular: " << g.IsRegular() << std::endl;
    //std::cout<<"\nWORD GENERATED: " << g.GenerateWord() << std::endl << std::endl;

    //g.GenerateFiniteAutomaton().PrintAutomaton();
}
