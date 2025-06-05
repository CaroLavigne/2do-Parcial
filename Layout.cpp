// Layout - this program tries to give the reader an idea of the layout of local memory in her compiler
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    int end;
    int n;
    long l;
    float f;
    double d;
    
    // set output to hex mode
    cout.setf(ios::hex);
    cout.unsetf(ios::dec;)
    
    // output the address of each variable in order to get an idea of how variables are laid out in memory
    cout << "--- = 0x" << &end << "\n";
    cout << "&n = 0x" << &n << "\n";
    cout << "&f = 0x" << &f << "\n";
    cout << "&d = 0x" << &d << "\n";
    
    //wait until user is ready before terminatin program to allow the user to see the program resuls
    system("PAUSE");
    return0;
}