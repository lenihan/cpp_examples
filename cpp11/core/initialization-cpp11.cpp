// https://en.cppreference.com/w/cpp/language/initialization

void main() 
{
    // NOTE: Prefer curly brace notation to functional and assignment notation because
    //       1) Curly brace does not narrow (convert a float to int is error)
    //       2) Curly brace can be used consistently for almost all initialization
    int a{1};   // curly brace notation
    int b{};    // {} is same as {0}
}