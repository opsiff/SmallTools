// ICCID generator.cpp
// a simple gen to create random ICCID ,not really true

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <string>

std::string SPnumber[4] = { "898600","898601","898602","898603" };//6 XXXXXX
const unsigned SPsize = 4;
unsigned luhn(std::string mostr) {
    unsigned length = mostr.size();
    unsigned ans = 0;
    for (unsigned i = 0; i < length; i++) {
        unsigned num = mostr[length - i - 1] - '0';
        if ((i & 1) == 0) {
            num = num * 2;
            num = num / 10 + num % 10;
        }
        ans += num;
    }
    ans %= 10;
    ans = 10 - ans;
    return ans % 10;
}
int main()
{
    srand(time(NULL));
    std::string ICCID;
    ICCID += SPnumber[rand() % SPsize];
    for (unsigned i = 7; i <= 19; ++i) {
        ICCID.push_back(rand() % 10 + '0');
    }
    ICCID.push_back(luhn(ICCID)+'0');
    std::cout << ICCID;
}
