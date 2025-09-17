#include <iostream>
#include <vector>
#include <string>

using namespace std;

int numberOfDuplicates(vector<int> vec);
void printVector(const vector<int>& nums);

int main(void)
{
    vector<int> vec = {1, 2, 3, 4};
    printVector(vec);

    return 0;
}

int numberOfDuplicates(vector<int> vec)
{
    // {1, 1, 1, 1} would return 1 count
    // {1, 1, 2, 2} would return 2 count
    int count = 0;
    for (int i = 0; i < vec.size(); i++) {
        for (int j = i + 1; j < vec.size(); j++) {
            if (vec[i] == vec[j]) {
                count++;
                break;
            }
        }
    }
    return count;
}

void printVector(const vector<int>& nums)
{
    cout << "The vector is { ";

    string result = "";
    for (int n : nums) {
        // always print comma even if all are duplicates
        result += to_string(n) + ", ";
    }
    if (!result.empty()) {
        result.pop_back(); // remove last space
        result.pop_back(); // remove last comma
    }
    result += " ";

    cout << result << "}" << endl;
    cout << "It has " << numberOfDuplicates(nums) << " duplicate(s)" << endl;
}