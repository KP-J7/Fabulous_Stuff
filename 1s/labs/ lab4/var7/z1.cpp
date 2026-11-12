#include <iostream>
int main() {
    int n, age, k, f, s, h;
start:
    std::cout << "Do you like programming?(1-yes/2-no)" << std::endl;
    std::cin >> n;
    if (n == 1) {
        std::cout << "You're cool guy!" << std::endl;
    }
    else if (n == 2) {
        std::cout << "Yore're bad guy!" << std::endl;
    }
    else {
        std::cout << "Error.Please, enter the right number" << std::endl;
        goto start;
    }
    std::cout << "How old were you when you wrote your first code?" << std::endl;
    std::cin >> age;
    if (age < 13) {
        std::cout << "You're lucky!" << std::endl;
    }
    else if (13 <= age <= 50) {
        std::cout << "Oh! It's usual for all programmers!" << std::endl;
    }
    else {
        std::cout << "You're amazing!" << std::endl;
    }
    std::cout << "What is your favorite programming language?" << std::endl;
    std::cout << "(1-C++,2-C,3-Kotlin,4-Java,5-Python,6-Rust,7-C#,8-JavaScript,9-PHP,10-Go,11-R,12-Fortran,13-Perl,14-Ruby,15-Scala)" << std::endl;
    std::cin >> n;
    switch (n) {
    case 1:
        std::cout << "You're incredible,bro!" << std::endl;
        break;
    case 2:
        std::cout << "You're cool,bro!" << std::endl;
        break;
    case 3:
        std::cout << "You're cool,bro!" << std::endl;
        break;
    case 4:
        std::cout << "You're cool,bro!" << std::endl;
        break;
    case 5:
        std::cout << "You're cool,bro!" << std::endl;
        break;
    case 6:
        std::cout << "You're cool,bro!" << std::endl;
        break;
    case 7:
        std::cout << "You're cool,bro!" << std::endl;
        break;
    case 8:
        std::cout << "You're strange,bro!" << std::endl;
        break;
    case 9:
        std::cout << "You're strange,bro!" << std::endl;
        break;
    case 10:
        std::cout << "You're strange,bro!" << std::endl;
        break;
    case 11:
        std::cout << "You're strange,bro!" << std::endl;
        break;
    case 12:
        std::cout << "You're strange,bro!" << std::endl;
        break;
    case 13:
        std::cout << "You're strange,bro!" << std::endl;
        break;
    case 14:
        std::cout << "You're strange,bro!" << std::endl;
        break;
    case 15:
        std::cout << "You're strange,bro!" << std::endl;
        break;
    default:
        std::cout << "You've entered the wrong number!" << std::endl;
        break;
    }
    std::cout << "What operating system do you usually use on your PC?(1-Windows/2-UNIX-like)" << std::endl;
    std::cin >> f;
    if (f == 1) {
        std::cout << "You're usual man!" << std::endl;
    }
    else if (f == 2) {
        std::cout << "Which UNIX-like system do you usually use on your PC?(1-Linux distribution/2-FreeBSD/3-OpenBSD/4-NetBSD/5-macOS)" << std::endl;
        std::cin >> s;
        if (s == 2 || s == 3 || s == 4)
            std::cout << "You're real crazy geek!" << std::endl;
        else if (s == 1)
            std::cout << "What Linux distribution do you usually use on your PC?(1-Ubuntu/2-Debian/3-Fedora/4-Linux Mint/5-Arch Linux/6-Red Hat Linux" << std::endl;
        std::cin >> h;
        if ((h == 1) || (h == 2) || (h == 3) || (h == 4) || (h == 6)) {
            std::cout << "You're still usual man!" << std::endl;
        }
        else if (h == 5) {
            std::cout << "Aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaah!You're reeeeeeeal geek,bro!" << std::endl;
        }
        else if (s == 5) {
            std::cout << "You are susceptible to marketing influence!Why buy something when you can get it for free?" << std::endl;
        }
        else {
            std::cout << "You've entered the wrong number!" << std::endl;
        }
    }
    else
        std::cout << "You've entered the wrong number!" << std::endl;
}
