#include <iostream>

int main() {
    int users[] = {1, 2, 2, 1, 1, 2, 2, 0, 0, 1, 0, 1, 0};
    int usersLen = sizeof(users) / sizeof(*users);
    std::cout << "========== System's Access Codes ==========\n"
                    << "0 - Admin\n"
                    << "1 - User\n"
                    << "2 - Guest\n";
    int usersCount[] = {0, 0, 0};
    int userCountLen = sizeof(usersCount) / sizeof(*usersCount);
    
    for (int user : users) {
        for (int i = 0; i < userCountLen; i++) {
            if (user == i) {
                usersCount[i]++;
            }
        }
    }
    int position = 0;
    for (int i = 0; i < usersLen; i++) {
        for (int j = 0; j < usersCount[i]; j++) {
            users[position] = i;
            position++;
        }
    }
    
    for (int user : usersCount) std::cout << user << ' ';
    putchar('\n');

    
    for (int user : users) std::cout << user << ' ';

    return 0;
}
