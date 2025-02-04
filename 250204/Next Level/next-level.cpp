#include <iostream>
#include <string>

using namespace std;

string user2_id;
int user2_level;

class gameuser1{
    public:
        string user1_id;
        int user1_level;

        gameuser1(string a = "codetree", int b = 10){
            this->user1_id = a;
            this->user1_level = b;
        }
};

class gameuser2{
    public:
        string user2_id;
        int user2_level;

        gameuser2(string a, int b){
            this->user2_id = a;
            this->user2_level = b;
        }
};

int main() {
    cin >> user2_id >> user2_level;

    gameuser1 gamer1 = gameuser1();
    gameuser2 gamer2 = gameuser2(user2_id,user2_level);
    cout << "user " << gamer1.user1_id << " lv " << gamer1.user1_level << endl;
    cout << "user " << gamer2.user2_id << " lv " << gamer2.user2_level << endl;


    // Write your code here!

    return 0;
}