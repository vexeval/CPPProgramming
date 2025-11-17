#include <iostream>
#include <fstream>

// count of arguments, list of arguments
int main(int argc, char *argv[])
{
    // for (int i = 0; i < argc; i++)
    // {
    //     std::cout << argv[i] << std::endl;
    // }

    // should have the executable and one argument
    if (argc != 2)
    {
        std::cout << "Usage: " << argv[0] << " <file_name>\n";
        return 1;
    }

    std::ifstream in;
    std::string file_name(argv[1]);
    // Open the file
    in.open(file_name);

    if (in.fail())
    {
        std::cout << file_name << " could not be opened. Does it exists?\n";
        return 1; // Error
    }

    char ch;
    int count_chars = 0;
    while (!in.eof())
    {
        ch = in.get(); // Getting one character from a file || also: in.put()
        if (ch != ' ' && ch != '\n' && ch != EOF)
        {
            count_chars++;
        }
    }

    std::cout << file_name << " has " << count_chars << " characters.\n";

    // TODO: Count the number of lines in the file
    char lch;
    int count_lines = 0;
    while (!in.eof())
    {
        
    }

    std::cout << file_name << " has " << count_lines << " lines.\n";

    in.close();

    return 0;
}