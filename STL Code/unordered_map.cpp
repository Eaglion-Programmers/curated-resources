#include<iostream>
#include<unordered_map>

using namespace std;

/*

    unordered_map is a library provided in the,
    'standard template library'(stl) of c++

    It is basically, a hashmap implementation.
    by defining an unordered_map, we are defining
    a hashmap.

    i.e. a key-value pair data structure.

    below example will make things clear!

*/


int main()
{
    // hashmap to store roman numeral symbols and their values.
    // i.e. I = 1, V = 5

    unordered_map<char,int> roman_numerals;
    //characters are the keys and integers are values.
    
    // initialize the hashmap with the few key-value pairs.
    roman_numerals = {
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
    };

    // still, 2 roman numerals are remaining to be defined.
    // i.e. D and M
    // {'D',500} & {'M',1000}


    // Let's see the insert function in unordered_map
    roman_numerals.insert({'D',500});
    roman_numerals.insert({'M',1000});

    // now, to access the values for a particular key
    cout << roman_numerals.at('D') << endl;
    // or
    cout << roman_numerals['M'] << endl;


    // there are plenty of functions associated with the unorderd_map object
    // i.e. size()
    cout << roman_numerals.size() << endl;
    // this will print the total number of key-value pairs we have inserted
    // in the unordered_map


    // find(k) is a function to check whether we have any key-value
    // pair having key = k.
    if(roman_numerals.find('D') == roman_numerals.end()){
        cout << "there is no key-value pair in the roman-numerals with key = 'D'." << endl;
    }
    else{
        cout << "there is a key-value pair in the roman-numerals with key = 'D'." << endl;
    }


    // There are many more functions like this...
    // you have the whole internet with you... just EXPLORE!

    return 0;
}