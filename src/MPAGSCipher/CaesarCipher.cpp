#include "CaesarCipher.hpp"
#include "iostream"

CaesarCipher::CaesarCipher(const size_t& cipherKey) : key_{cipherKey} {}

CaesarCipher::CaesarCipher(const std::string& cipherKey){
    if ( ! cipherKey.empty() ) {
        bool keyAllDigits=true;
        for ( const auto& elem : cipherKey ) {
            if ( ! std::isdigit(elem) ) {
	            std::cerr << "[error] cipher key must be an unsigned long integer for Caesar cipher,\n"
	                    << "        the supplied key (" << cipherKey << ") could not be successfully converted" << std::endl;
                keyAllDigits=false;
                break;
            }
        }
        if (keyAllDigits) key_ = std::stoul(cipherKey);
    }
}
