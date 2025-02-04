#include <iostream>
#include <string>

using namespace std;

string secret_code;
char meeting_point;
int time1;

class information{
    public:
        string a;
        char b;
        int c;
        information(string a,char b, int c){
            this->a = a;
            this->b = b;
            this->c = c;
        }

};

int main() {
    cin >> secret_code >> meeting_point >> time1;
    information info = information(secret_code,meeting_point,time1);
    cout << "secret code : " << info.a << endl;
    cout << "meeting point : " << info.b << endl;
    cout << "time : " << info.c << endl;   
    // Write your code here!

    return 0;
}