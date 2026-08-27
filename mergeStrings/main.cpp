#include <cstddef>
#include <string>
#include <vector>

std::string mergeAlternately(std::string word1, std::string word2) {
    std::vector<char> v1(word1.begin(), word1.end());
    std::vector<char> v2(word2.begin(), word2.end());
    std::vector<char> v3 = v2;
    size_t size;
    int j = 0;
    if (v1.size() == v2.size()){
        size = v1.size() + v2.size();
        for(size_t i = 0; i < size; i++) {
            v1.insert(v1.begin() + i+1, v2[j]);
            i++;
            j++;
        }
    }
    else if (v1.size() > v2.size()) {
        size = v1.size();
        for(size_t i = 0; j < size; i++) {
            v1.insert(v1.begin() + i+1, v2[j]);
            i++;
            j++;
            if(v2.size() - 1 < j) {
                break;
            }
        }
    }
    else {
        size = v2.size();
        size_t diff = v2.size() - v1.size();
        for(size_t i = 0; j < size; i++) {
            if(v1.size() - 1 < i) {
                v1.insert(v1.end(), v3.begin(), v3.end());
                break;
            }
            v1.insert(v1.begin() + i+1, v2[j]);
            v3.erase(v3.begin() + 0);
            i++;
            j++;
            // if (j > diff) {
            //     v1.insert(v1.end(), v3.begin(), v3.end());
            //     if (endnow) {
            //         break;
            //     }
            // }
            
        }
    }
    
    std::string str(v1.begin(), v1.end());
    return str;
}

int main() {
    mergeAlternately("mgldgsvnsgpdvmjqp", "aktmjafgkzszekngiv");
}