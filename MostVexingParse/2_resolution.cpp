#include <iostream>

int main(int argc, char const *argv[])
{
    std::string str((std::string()));
    //std::string str(std::string{});
    //std::string str{std::string()};
    //std::string str{std::string{}};
    std::cout<<str.empty()<<"\n";
    return 0;
}