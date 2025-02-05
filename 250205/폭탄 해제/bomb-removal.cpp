#include <iostream>
#include <string>

using namespace std;

string unlock_code;
char wire_color;
int seconds;

class boomb{
    public:

        string code;
        char color;
        int seconds;

        boomb(string a, char b, int c){
            this->code = a;
            this->color = b;
            this->seconds = c;
        }
};
int main() {
    cin >> unlock_code >> wire_color >> seconds;

    boomb boomb1 = boomb(unlock_code,wire_color,seconds);

    cout << "code : " << boomb1.code << endl;
    cout << "color : " << boomb1.color << endl;
    cout << "second : " << boomb1.seconds << endl;
    // Write your code here!

    return 0;
}