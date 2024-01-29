#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main() {

    // creation
    unordered_map<string, int> m;

    pair<string, int> p = make_pair("babbar", 3);
    m.insert(p);
    pair<string, int> pair2("love", 2);
    m.insert(pair2);

    m["entry"] = 1;

    // cout << m["entry"] << endl;
    // cout << m.at("love") << endl;

    // this gives the error of key out of range
    // cout << m.at("unknownKey") << endl;
    // We an handle this error if we tried to print the value like this
    // cout << m["unknownKey"] << endl;
    // This creates the key at the instance of calling it and assign the value as '0'

    // COUNT FUNCTION: To check the presence of a key in a map, we can use count() function

    cout << m.count("love") << endl;

    // erase the key from the map

    m.erase("unknownKey");
    cout << m.size() << endl; // to print the size of the map or the number of keys in the map

    // Using iterators to iterate over the whole map

    unordered_map<string, int> :: iterator it = m.begin();

    while(it != m.end()) {
        cout << it->first << " " << it ->second << endl;
        it++;
    }

    return 0;
}