#include <iostream>
#include <vector>

using namespace std;

void print(const vector<int> &v);
void rotateRight(vector<int> &v, int k);
void rotateLeft(vector<int> &v, int k);

int main(void)
{
    // Create vector
    vector<int> vec {1, 2, 3, 4, 5, 6};
    print(vec);

    // Create with a size and default value
    vector<int> vec2(5, 10); // 5 elements, each set to 10
    print(vec2);

    // Create a copy from another vector
    vector<int> vec3(vec);
    print(vec3);

    // Print the current number of elements
    cout << vec3.size() << endl;

    // Front and back elements
    cout << "Front: " << vec3.front() << ", Back: " << vec3.back() << endl;

    // Add to the end
    vec3.push_back(8); // add 8 to the end of the vector
    vec3.push_back(9); // add 9 to the end of the vector

    // Remove the last element
    vec3.pop_back();

    cout << "Post-additiona and removal:" << endl;
    print(vec3);

    // Iterators - an object that enables traversal over elements
    /*
        begin(): points to the first element
        end(): points to one past the last element (diabolical)
    */
    
    // Insert an element (iterator, value)
    vec3.insert(vec3.begin(), 100);

    // Insert 999 in the middle
    int mid = vec3.size()/2;
    vec3.insert(vec3.begin() + mid, 999);
    
    cout << "Post-insertion:" << endl;
    print(vec3);

    // Erase (iterator)
    vec3.erase(vec3.begin()+1);

    cout << "Post-erase:" << endl;
    print(vec3);

    // Rotate right
    rotateRight(vec3, 2);

    cout << "Post-rotate right 2 times:" << endl;
    print(vec3);

    cout << "Post-rotate left 2 times:" << endl;
    rotateLeft(vec3, 2);
    print(vec3);


    return 0;
}

void print(const vector<int> &v)
{
    for (int el : v) {
        cout << el << ' ';
    }
    cout << endl;
}

void rotateRight(vector<int> &v, int k)
{
    k %= v.size(); // num of rotations

    while (k) {
        // Get the last and insert at the beginning
        v.insert(v.begin(), v.back());
    
        // Remove the last
        v.pop_back();
        k--;
    }

}

void rotateLeft(vector<int> &v, int k) // TODO: FIX
{
    k %= v.size(); // num of rotations

    while (k) {
        // Get the last and insert at the beginning
        v.insert(v.end(), v.front());
    
        // Remove the last
        v.erase(v.end());
        k--;
    }

}