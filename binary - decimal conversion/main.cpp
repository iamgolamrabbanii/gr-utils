#include <iostream>
#include <algorithm>
#include <bitset>
#include <string>
using namespace std;

string lower(string &s) {
    for(char &c: s) c = tolower(c);
    return s;
}

string input_binary_check(bool check) {
    if(check == false)
        cout << "Enter Binary number : ";
    string input; cin >> input;

    if(lower(input) == "exit") return "exit";

    for (char c : input) {
        if (c != '0' && c != '1') {
            cout << "Enter a valid Binary Number: ";
            return input_binary_check(true);  
        }
    }

    reverse(input.begin(), input.end());
    return input;
}

void binary_to_decimal() {
    string binaryNum = input_binary_check(false);
    
    if(binaryNum == "exit") return;

    int decimalNum = 0;
    int length = binaryNum.length();

    for (int i = 0; i < length; i++) {
        if (binaryNum[i] == '1') {
            decimalNum += (1 << i);
        }
    }
    cout << "Decimal : " << decimalNum << endl;

    return binary_to_decimal();
}

string input_decimal_check_and_convert(bool check) {
    if(check == false)
        cout << "Enter Decimal number : ";
    string input; cin >> input;

    if(lower(input) == "exit") return "exit";
    
    for (char c : input) {
        if (c < '0' || c > '9') {
            cout << "Enter a valid Decimal Number : ";
            return input_decimal_check_and_convert(true);  
        }
    }
    
    if(input.size() >= 19) {
        string max64bit = "9223372036854775807";
        bool f = false;
        if(input.size() == 19) {
            for(int i = 0; i < 19; i++) {
                if(input[i] > max64bit[i]) {
                    f = true; break;
                }
            }
        } 
        
        if(f || input.size() > 19) {
            cout << "Enter a 64bit Decimal Number : ";
            return input_decimal_check_and_convert(true);
        }
    }
    long long int des = stoll(input);
    string binary64bit = bitset<64> (des).to_string();
    binary64bit.erase(0, binary64bit.find('1'));

    return binary64bit;
}


void decimal_to_binary() {
    string binaryNum = input_decimal_check_and_convert(false);
    
    if(binaryNum == "exit") return;

    cout << "Binary : " << binaryNum << endl;
    return decimal_to_binary();
}

int main(){
    cout << "Write \"exit\" for exit \n"; 
    do {
        cout << "1. Binary to Decimal\n";
        cout << "2. Decimal to Binary\n";

        string input;
        cin >> input;
        if(input == "1") {
            binary_to_decimal();
        }
        else if(input == "2") {
            decimal_to_binary();
        }
        else if(lower(input) == "exit") {
            break;
        }
        else {
            cout << "Enter a Valid Number " << endl;
        }
    } while(true);

    return 0;
}
