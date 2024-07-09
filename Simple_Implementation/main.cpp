#include <iostream>
#include <map>
#include <string>

std::map<std::string,std::string> users;

void DisplayUI();
void Login();
void Register();
void ForgotPassword();
void UserExit();

void DisplayUI()
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

    if (userAnswer == 1)
    {
        Login();
    }
    else if (userAnswer == 2)
    {
        Register();
    }
     else if(userAnswer == 3)
    {
        ForgotPassword();
    }
     else if(userAnswer == 4)
    {
        UserExit();
    }
}

void Login()
{
    std::string username;
    std::string password;

    std::cout << "Please enter your username: ";
    std::cin >> username;

    std::cout << "Please enter your password: ";
    std::cin >> password;

    if(users[username] == password)
    {
        std::cout << "You are Logged in as: " << username << "\n\n";
    }
    else
    {
        std::cout << "Username or password does not match any users... Please try again\n\n";
        DisplayUI();
    }
    
}


void Register()
{
    std::string userInput;
    std::string passwordInput;

    std::cout << "Enter a username: ";
    std::cin >> userInput;

    std::cout << "Enter a password: ";
    std:: cin >> passwordInput;

    users[userInput] = passwordInput;

    std::cout << "You have registered an account!\n\n";
    DisplayUI();
}

void ForgotPassword()
{
    std::string userInput;
    std::cout << "To recover your password please enter your username: ";
    std::cin >> userInput;

    std::cout << "Your password is: " << users[userInput] << "\n\n";
    DisplayUI();
}

void UserExit()
{
    std::cout << "Thank you...Goodbye!\n\n";
}

int main()
{
    DisplayUI();
    
    return 0;
}