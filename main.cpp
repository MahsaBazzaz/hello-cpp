#include <iostream>
#include <string>
//TODO: why should we add include <string> if string is part of std?
using std::string;
using std::cout;
using std::cin;

int main() {
    cout << "Hello, World!" << std::endl;
    //
    // data types
    //
    int myInt = 0;
    float  myFloat = 0.0;
    double myDouble = 0.0;
    char myChar = 'c';
    string myString = "string";
    bool myBoolean = true;
    const string myConst = "This is myInt constant string";
    //
    // output
    //
    cout << myString << "\n" << myBoolean << std::endl;
    //
    // input
    //
    int a = 5;
    int b = 1;
     cin >> a;
    // TODO: how to type check cin input?
    //
    // operators
    //
    cout << std::endl <<  &a << std::endl; // address of the variable
    cout << a + b << std::endl;;
    cout << (a > b) << std::endl;;
    //
    // get line, clean the buffer first if used with cin
    //
    // ws(cin);
    cin.ignore();
    std::getline(cin, myString);
    // cin.getline(myString,23);
    cout << "your string: " << myString << std::endl;
    //
    // conditions
    //
    if(a > b){
        cout << "a>b";
    }
    else{
        cout << "a<=b";
    }
    //
    // shorthand if
    //
    int time = 20;
    string result = (time < 18) ? "Good day." : "Good evening.";
    cout << result << std::endl;
    //
    // arrays
    //
    int cars[6];
    cout << sizeof(cars)/ sizeof (int ) << std::endl;
    //
    // struct
    //
    struct {             // Structure declaration
        int myNum;         // Member (int variable)
        string myString;   // Member (string variable)
    } myStructure1,myStructure2;       // Structure variable
    myStructure1.myNum = 0;
    myStructure1.myString = "llk";

    struct myDataType { // This structure is named "myDataType"
        int myNum;
        string myString;
    };

    //
    // references
    //
    string base = "Pizza";  // base variable
    string &reference = base;    // reference to base
    string copy = base;

    cout << base << std::endl;
    cout << &base << std::endl;
    cout << reference << std::endl;
    cout << &reference << std::endl;
    cout << copy << std::endl;
    cout << &copy << std::endl;
    //
    // pointers :  a variable that stores the memory address as its value.
    //
    string* ptr = &base;    // A pointer variable, with the name ptr, that stores the address of food
    cout << ptr<< std::endl;
    cout << &ptr << std::endl;
    //
    // dereference
    //

    return 0;
}
