#include <iostream>
#include <vector>
#include <string>

using namespace std;

string my_join(const vector<string>& words, string separ) {
    if (words.empty()) {
        return "";
    }

    string result = words[0];
    for (int i = 1; i < words.size(); ++i) {
        result += separ + words[i];
    }
    return result;
}

int main(void) {
    vector<string> words;
    string input;
    string separator;

    cout << "Enter strings (\"exit\" to stop)" << endl;
    while (getline(cin, input) && input != "exit") {
        words.push_back(input);
    }

    cout << "Enter the separator" << endl;
    getline(cin, separator);

    string joined_string = my_join(words, separator);
    cout << joined_string << endl;

    return 0;
}