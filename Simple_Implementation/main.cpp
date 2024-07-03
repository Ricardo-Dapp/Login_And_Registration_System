#include <iostream>
#include <string>


int DisplayUI()
{
     int userAnswer = 0;

    std::cout << "-------------------------------\n\n";
    std::cout << "   Welcome To The Login Page\n\n";
    std::cout << "----------- Menu --------------\n\n";

    std::cout << "|Press 1 to LOGIN                    |\n";
    std::cout << "|Press 2 to REGISTER                 |\n";
    std::cout << "|Press 3 if you forgot your PASSWORD |\n";
    std::cout << "|Press 4 to EXIT                     |\n\n";
    std::cout << "Please enter your choice: ";
    std::cin >> userAnswer;

    return userAnswer;
}

void Login()
{
    std::string username;
    std::string password;

    std::cout << "Please enter your username: ";
    std::cin >> username;

    std::cout << "Please enter your password: ";
    std::cin >> password;

    VerifyLogin(username,password);
    
}

void VerifyLogin(std::string username,std::string password)
{
    std::string registeredUsers[100][100];
    
}

void Register()
{

}

void ForgotPassword()
{

}

void UserExit()
{
    std::cout << "Thank you...Goodbye!\n";
}

int main()
{

    int directUser = 0;

    directUser = DisplayUI();
    
    if (directUser == 1)
    {
        Login();
    }
    else if (directUser == 2)
    {
        Register();
    }
     else if(directUser == 3)
    {
        ForgotPassword();
    }
     else if(directUser == 4)
    {
        UserExit();
    }
    

    
    return 0;
}