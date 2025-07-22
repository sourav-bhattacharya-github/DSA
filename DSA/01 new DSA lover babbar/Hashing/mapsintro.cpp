#include <iostream>
#include <unordered_map>
#include <map>
#include <string>
using namespace std;

int main()
{
    // Create a hash map
    unordered_map<string, int> mp;

    // Inserting key-value pairs into the hash map
    pair<string, int> p1("apple", 1);
    pair<string, int> p2("banana", 2);
    mp.insert(p1);
    mp.insert(p2);

    mp["orange"] = 3; // Another way to insert

    // Searching for a key
    cout << "Value for 'apple': " << mp["apple"] << endl;
    cout << "Value for 'banana': " << mp["banana"] << endl;

    // ** Difference between find and [] operator **
    //
    // cout << mp.at("Lichi") << endl; // Throws an exception if key not found (error)
    // cout << mp["Lichi"] << endl; // Returns 0
    // The above two lines will throw an error if "Lichi" is not found in the map.
    // The first line throws an exception, while the second line returns 0.
    // But
    cout << mp["Lichi"] << endl;    // Inserts "Lichi" with value 0
    cout << mp.at("Lichi") << endl; // Now it works, returns 0

    // iterating through the hash map
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " : " << it->second << endl;
    }

    // by advanced for loop
    for (auto &pair : mp)
    {
        cout << pair.first << " : " << pair.second << endl;
    }

    // By iterator
    unordered_map<string, int>::iterator it = mp.begin();
    while (it != mp.end())
    {
        cout << it->first << " : " << it->second << endl;
        it++;
    }

    // Checking if a key exists
    if (mp.find("banana") != mp.end())
    {
        cout << "Key 'banana' exists in the map." << endl;
    }
    else
    {
        cout << "Key 'banana' does not exist in the map." << endl;
    }

    // Erasing a key-value pair
    mp.erase("banana");
    cout << "After erasing 'banana':" << endl;
    for (auto &pair : mp)
    {
        cout << pair.first << " : " << pair.second << endl;
    }

    // Clearing the hash map
    mp.clear();
    cout << "After clearing the map, size: " << mp.size() << endl;

    // Checking if the map is empty
    if (mp.empty())
    {
        cout << "The map is empty." << endl;
    }
    else
    {
        cout << "The map is not empty." << endl;
    }

    // Order Map

    map<int, string> orderedMap;
    orderedMap[3] = "three";
    orderedMap[1] = "one";
    orderedMap[2] = "two";

    cout << "Ordered Map:" << endl;
    for (const auto &pair : orderedMap)
    {
        cout << pair.first << " : " << pair.second << endl;
    }

    // Note: The order map will maintain the order of keys based on their natural ordering.
    cout << "Size of ordered map: " << orderedMap.size() << endl;
    cout << "Is ordered map empty? " << (orderedMap.empty() ? "Yes" : "No") << endl;
    cout << "Value for key 1 in ordered map: " << orderedMap[1] << endl;
    cout << "Value for key 4 in ordered map (not present): " << orderedMap[4] << endl;   // Will insert key 4 with default value
    cout << "Value for key 4 in ordered map after insertion: " << orderedMap[4] << endl; // Now it will return the default value
    cout << "Value for key 4 in ordered map using at(): " << orderedMap.at(4) << endl;   // Will throw an exception if key 4 is not present
    cout << "Value for key 2 in ordered map: " << orderedMap[2] << endl;
    cout << "Value for key 3 in ordered map: " << orderedMap[3] << endl;

    return 0;
}