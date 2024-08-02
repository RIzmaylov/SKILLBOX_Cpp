#include <iostream>
#include <vector>
#include <regex>

/*

*/
bool checkChar(char c)
{
    std::string charBase = "QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm1234567890-.";
    
    if (charBase.find(c) == std::string::npos) return false;
    return true;
}

bool checkCharInUserName(char c)
{
    std::string charBase = "!#$%&'*+-/=?^_`{|}~";

    if (!checkChar(c) && charBase.find(c) == std::string::npos) return false;
    return true;
}

bool checkPointRules(char c, bool& pointFlag, int index, int lastWordIndex)
{
    if (c == '.')
    {
        if (index == 0 || index == lastWordIndex) return false;
        if (pointFlag) return false;
        else pointFlag = true;
    } 
    else 
    {
        pointFlag = false;
    }
    return true;
}

bool checkUsername(const std::string& username)
{
    // std::cout << username << std::endl;
    if (username.empty() || username.length() > 64) return false;

    bool pointFlag = false;
    for (int i = 0; i < username.length(); ++i)
    {
        if (!checkPointRules(username[i], pointFlag, i, username.length() - 1)) return false;
        if (!checkCharInUserName(username[i])) return false;
    }
    return true;
}

bool checkServerDomain(const std::string& serverDomain)
{
    // std::cout << serverDomain << std::endl;
    if (serverDomain.empty() || serverDomain.length() > 63) return false;

    bool pointFlag = false;
    for (int i = 0; i < serverDomain.length(); ++i)
    {
        if (!checkPointRules(serverDomain[i], pointFlag, i, serverDomain.length() - 1)) return false;
        if (!checkChar(serverDomain[i])) return false;
    }
    return true;
}

bool checkEmail(const std::string& email)
{
    int atIndex = email.find('@');
    if (atIndex == -1 || atIndex != email.rfind('@')) return false;
    if (!checkUsername(email.substr(0, atIndex)) || 
        !checkServerDomain(email.substr(atIndex + 1, email.length() - atIndex - 1))) 
            return false;
    return true;
}

bool checkEmailByRegex(const std::string& email) {
    static const std::regex r(R"(^(([^<>()\[\]\\.,;:\s@"]+(\.[^<>()\[\]\\.,;:\s@"]+)*)|(".+"))@((\[[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}])|(([a-zA-Z\-0-9]+\.)+[a-zA-Z]{2,}))$)");
    return std::regex_match(email, r);
}

void tests()
{
    std::vector<std::string> trueEmails {
        "simple@example.com",
        "very.common@example.com",
        "disposable.style.email.with+symbol@example.com",
        "other.email-with-hyphen@example.com",
        "fully-qualified-domain@example.com",
        "user.name+tag+sorting@example.com",
        "x@example.com",
        "example-indeed@strange-example.com",
        "admin@mailserver1",
        "example@s.example",
        "mailhost!username@example.org",
        "user%example.com@example.org"
    };
    std::vector<std::string> falseEmails {
        "John..Doe@example.com",
        "Abc.example.com",
        "A@b@c@example.com",
        "a\"b(c)d,e:f;g<h>i[j\\k]l@example.com",
        "1234567890123456789012345678901234567890123456789012345678901234+x@example.com",
        "i_like_underscore@but_its_not_allow_in _this_part.example.com"
    };
    std::cout << "Right emails: " << std::endl;
    for (const auto& v : trueEmails)
    {
        std::cout << v << " - " << (checkEmail(v) ? "YES" : "NO") << std::endl;
        // std::cout << v << " - " << (checkEmailByRegex(v) ? "YES" : "NO") << std::endl;
    }
    std::cout << "Wrong emails: " << std::endl;
    for (const auto& v : falseEmails)
    {
        std::cout << v << " - " << (checkEmail(v) ? "YES" : "NO") << std::endl;
        // std::cout << v << " - " << (checkEmailByRegex(v) ? "YES" : "NO") << std::endl;
    }
}

int main()
{
    std::string email;

    tests();
    // std::cout << "Enter email: ";
    // std::getline(std::cin, email);
    // if (checkEmail(email)) std::cout << "YES" << std::endl;
    // else std::cout << "NO" << std::endl;

    return 0;
}