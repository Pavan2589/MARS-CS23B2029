#include <iostream>
#include <vector>
#include <string>

using namespace std;
// creating a class student to get the name and level of the member
class student {
    int level;
    string name;
public:
    student(const string& name, int level) : name(name), level(level) {}
    string getName() {
        return name;
    }
    int getLevel() {
        return level;
    }
    void sendMessage(const string& message) {
        cout << "Message from " << name << ": " << message << endl;
    }
};

class MarsClub {
    vector<student> members; //creating vector a kind of dynamic array to store the member details

public:
    void addstudent(const string& name, int level) {
        members.emplace_back(name, level);
    }
    
    void messageToLevel(int senderLevel, const string& message) {
        for (student& member : members) {
            if (member.getLevel() >= senderLevel) {
                member.sendMessage(message);
            }
        }
    }
};

int main() {
    MarsClub club;
    int x, level,y;
    string message;
    string membername;
    cout << "Enter the number of members to add to club\n";
    cin >> x;
    for (auto i = 0; i < x; i++) {
        cout << "Enter the member name\n";
        cin >> membername;
        cout << "Enter the member level\n";
        cin >> level;
        club.addstudent(membername, level);
    }
    cout << "enter the messagw you want to send \n";
    cin >> message;
    cout << "level of the student\n";
    cin >> y;
    club.messageToLevel(y,message);
    return 0;
}
