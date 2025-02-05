#include <iostream>
#include <string>

using namespace std;

string product_name;
int product_code;

class product{
    public:
        string name;
        int code;

        product(string name = "codetree", int code = 50){
            this->name = name;
            this->code = code;
        }
};

int main() {
    cin >> product_name >> product_code;

    product product1 = product();
    product product2 = product(product_name,product_code);

    cout << "product " << product1.code << " is " << product1.name << endl;
    cout << "product " << product2.code << " is " << product2.name << endl;


    // Write your code here!

    return 0;
}