#ifndef MPAGSCIPHER_CAESARCIPHER_HPP
#define MPAGSCIPHER_CAESARCIPHER_HPP

#include <string>

class CaesarCipher {
    public:
    //functions
       explicit CaesarCipher(const size_t& cipherKey);
       explicit CaesarCipher(const std::string& cipherKey);

    //variables
    size_t key_=0;
};

#endif // MPAGSCIPHER_CAESARCIPHER_HPP