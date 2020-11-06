#include "CaesarCipher.hpp"
#include "iostream"

CaesarCipher::CaesarCipher(const size_t& cipherKey) : key_{cipherKey%alphabetSize_} {}

CaesarCipher::CaesarCipher(const std::string& cipherKey){
    if ( ! cipherKey.empty() ) {
        for ( const auto& elem : cipherKey ) {
            if ( ! std::isdigit(elem) ) {
	            std::cerr << "[error] cipher key must be an unsigned long integer for Caesar cipher,\n"
	                    << "        the supplied key (" << cipherKey << ") could not be successfully converted" << std::endl;
                return;
            }
        }
        key_ = std::stoul(cipherKey)%alphabetSize_;
    }
}

const std::vector<char> CaesarCipher::alphabet_={'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
const size_t CaesarCipher::alphabetSize_=CaesarCipher::alphabet_.size();

std::string CaesarCipher::applyCipher(const std::string& inputText, const bool& encrypt) const {
    // Create the output string
    std::string outputText {};

     // Loop over the input text
    char processedChar {'x'};
    for ( const auto& origChar : inputText ) {

    // For each character in the input text, find the corresponding position in
    // the alphabet by using an indexed loop over the alphabet container
    for ( size_t i{0}; i < alphabetSize_; ++i ) {
        if ( origChar == alphabet_[i] ) {
	// Apply the appropriate shift (depending on whether we're encrypting
	// or decrypting) and determine the new character
	// Can then break out of the loop over the alphabet
	        if ( encrypt ) {
	            processedChar = alphabet_[ (i + key_) % alphabetSize_ ];
	        } else {
	            processedChar = alphabet_[ (i + alphabetSize_ - key_) % alphabetSize_ ];
	        }
	        break;
        }
    }
    // Add the new character to the output text
    outputText += processedChar;
  }
  return outputText;
}