/*strings in cpp
2 implementations of strings in cpp
- c style stirngs
- stl class strings
*/

#include <iostream>
using namespace std;

int read_word();
int read_line();
void display(char *, string);

int main()
{
    //\0 is always added to string in the end; thus, str.length()=> str+1
    char str[] = "C++";
    cout << str;

    char str1[4] = "C++";
    char str2[] = {'C', '+', '+', '\0'};
    char str3[4] = {'C', '+', '+', '\0'};

    read_word();
    read_line();
    display(str, str);
    return 0;
}

// cpp function to read a word-> this fn reads only a word even if entire line is passed
// This is because the extraction operator >> works as scanf() in C and considers a space " " has a terminating character.
int read_word()
{
    char str[100];

    cout << "Enter a string: ";
    cin >> str;
    cout << "You entered: " << str << endl;
    return 0;
}

int read_line()
{
    // using char[]
    char str[100];
    cout << "Enter a string: ";
    cin.get(str, 100);

    // using stl string dtype
    string s;
    getline(cin, s);

    cout << "You entered: " << str << endl;
    return 0;
}

void display(char s[], string str)
{
    cout << "Entered char array is: " << s << endl;
    cout << "Entered char array is: " << str << endl;
}
