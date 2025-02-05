#include <iostream>
#include <string>
#include <algorithm>
#include <functional>

#define MAX_N 10

using namespace std;

int n;
string name[MAX_N], street_address[MAX_N], region[MAX_N];

class people{
    public:
        string name;
        string address;
        string region;

        people(string name = "", string address = "", string region = ""){
            this->name = name;
            this->address = address;
            this->region = region;
        }
};

int main() {
    cin >> n;
    int min = 0;

    people* peoples = new people[n];

    for (int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> street_address[i];
        cin >> region[i];
        peoples[i] = people(name[i],street_address[i],region[i]);
    }

    sort(name,name+n);
    for(int i = 0; i < n; i++){
        if(peoples[i].name == name[n-1]){
            min = i;
            break;
        }
    }

    cout << "name " << peoples[min].name << endl;
    cout << "addr " << peoples[min].address << endl;
    cout << "city " << peoples[min].region << endl;




    // Write your code here!

    return 0;
}