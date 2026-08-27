// n = 123
#include <vector>
#include <iostream>

bool isPalindrome(int x) {
int y = x;
int digit;
int reversed = 0;
int i = 0;

std::vector<int> digits;
while(y > 0) {
    digit = y % 10;
    digits.push_back(digit);
    y /= 10; // 12,3
}
while(i < digits.size()){
    if (i == digits.size() - 1) {
    reversed +=digits[i];
}
    else {
    reversed = (reversed + digits[i]) * 10;
}
i++;
}


if(reversed == x){
    return true;
}
else {
    return false;
}
}

int main(){
    if (isPalindrome(12221)) {
        std::cout << "palindrou!";
        return 0;
    }
    else {
        std::cout << "dispalindrou!";
        return 1;
    }
    
    
}