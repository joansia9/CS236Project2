#include "Lexer.h"
#include "Parser.h"
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    //why is the check not workin?

     string file = argv[1];
     ifstream input(file);

     stringstream in;

    input.open(file);
    in << input.rdbuf();
    input.close();

    string myFile = in.str();

    //runs the lexer (project 1)
    Lexer lexer;
    lexer.Run(myFile);


    try {
        // Run Parser
        Parser parser(lexer.getTokens());
        DatalogProgram program = parser.Parse();
        cout << "Success!" << endl;
        cout << program.toString();

        // Catch Errors
    } catch (Token* errorToken) {
        cout << "Failure!" << endl << "  " << errorToken -> toString();
    }


    return 0;
}