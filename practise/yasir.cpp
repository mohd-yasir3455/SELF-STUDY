#include <iostream>
using namespace std;

int main()
{
    string name = "bitch";  // The name to search for
    string result = "";     // To store the matched letters

    for (int i = 0; i < name.length(); i++)  // Loop through each letter in the name
    {
        for (int j = 0; j < 26; j++)         // Loop through the alphabet for each letter
        {
            char letter = 'a' + j;           // Generate letters from 'a' to 'z'
            
            // Print the matched part of the name (result) + the current letter being searched
            cout << result + letter << endl;

            if (letter == name[i])           // If the current letter matches the name's letter
            {
                result += letter;            // Add the matched letter to the result
                break;                       // Break out of the inner loop to start searching for the next letter
            }
        }
    }

    return 0;
}
