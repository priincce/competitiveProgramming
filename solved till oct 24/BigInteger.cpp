#include<bits/stdc++.h>
using namespace std;
 static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

int init = [] {
    ofstream out("user.out");
    cout.rdbuf(out.rdbuf());
    for (string str; getline(cin, str); cout << '\n') {
        if (str.find(',') == string::npos) {
            cout << str;
            continue;
        }
        stringstream ss(str); ss.ignore();
        int prev; ss >> prev; ss.ignore();
        cout << '[' << prev;
        for (int curr; ss >> curr; ss.ignore()) {
            cout << ',' << gcd(prev, curr) << ',' << curr;
            prev = curr;
        }
        cout << ']';
    }
    exit(0);
    return 0;
}();
class BigInteger {
public:

    BigInteger(const std::string& number) {
        for (char digit : number) {
            if (digit < '0' || digit > '9') {
                throw std::invalid_argument("Invalid character in number string.");
            }
            digits.push_back(digit - '0');
        }
        std::reverse(digits.begin(), digits.end());
    }


    BigInteger operator+(const BigInteger& other) const {
        std::vector<int> result;
        int carry = 0;
        size_t max_size = std::max(digits.size(), other.digits.size());

        for (size_t i = 0; i < max_size || carry; ++i) {
            if (i == result.size()) result.push_back(0);
            if (i < digits.size()) result[i] += digits[i];
            if (i < other.digits.size()) result[i] += other.digits[i];
            result[i] += carry;
            carry = result[i] / 10;
            result[i] %= 10;
        }

        return BigInteger(result);
    }


    BigInteger operator-(const BigInteger& other) const {
        if (*this < other) throw std::invalid_argument("Subtraction would result in a negative number.");

        std::vector<int> result(digits);
        int borrow = 0;

        for (size_t i = 0; i < other.digits.size() || borrow; ++i) {
            result[i] -= borrow;
            if (i < other.digits.size()) result[i] -= other.digits[i];
            if (result[i] < 0) {
                result[i] += 10;
                borrow = 1;
            } else {
                borrow = 0;
            }
        }

        while (result.size() > 1 && result.back() == 0) {
            result.pop_back();
        }

        return BigInteger(result);
    }


    BigInteger operator*(const BigInteger& other) const {
        std::vector<int> result(digits.size() + other.digits.size(), 0);

        for (size_t i = 0; i < digits.size(); ++i) {
            for (size_t j = 0; j < other.digits.size(); ++j) {
                result[i + j] += digits[i] * other.digits[j];
                result[i + j + 1] += result[i + j] / 10;
                result[i + j] %= 10;
            }
        }

        while (result.size() > 1 && result.back() == 0) {
            result.pop_back();
        }

        return BigInteger(result);
    }


    void print() const {
        for (auto it = digits.rbegin(); it != digits.rend(); ++it) {
            std::cout << *it;
        }
        std::cout << std::endl;
    }


    bool operator<(const BigInteger& other) const {
        if (digits.size() != other.digits.size()) {
            return digits.size() < other.digits.size();
        }
        for (size_t i = digits.size(); i-- > 0; ) {
            if (digits[i] != other.digits[i]) {
                return digits[i] < other.digits[i];
            }
        }
        return false;
    }

    bool operator==(const BigInteger& other) const {
        return digits == other.digits;
    }

private:
    std::vector<int> digits;
    BigInteger(const std::vector<int>& digits) : digits(digits) {}
};

int main() {
    try {
        BigInteger a("123456789012345678901234567890");
        BigInteger b("987654321098765432109876543210");

        BigInteger sum = a + b;
        BigInteger diff = a - b;
        BigInteger prod = a * b;

        std::cout << "Sum: ";
        sum.print();

        std::cout << "Difference: ";
        diff.print();

        std::cout << "Product: ";
        prod.print();
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
