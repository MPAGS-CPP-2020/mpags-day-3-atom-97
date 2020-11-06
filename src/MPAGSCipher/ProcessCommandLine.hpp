#ifndef MPAGSCIPHER_PROCESSCOMMANDLINE_HPP
#define MPAGSCIPHER_PROCESSCOMMANDLINE_HPP

#include <string>
#include <vector>
#include "CipherMode.hpp"

struct ProgramSettings {
    bool help;
    bool version;
    std::string inputName;
    std::string outputName;
    std::string cipherKey;
    CipherMode mode;
};

bool processCommandLine(const std::vector<std::string>& args,
                        ProgramSettings& settings);

#endif // MPAGSCIPHER_PROCESSCOMMANDLINE_HPP 
