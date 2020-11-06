#ifndef MPAGSCIPHER_PROCESSCOMMANDLINE_HPP
#define MPAGSCIPHER_PROCESSCOMMANDLINE_HPP

#include <string>
#include <vector>

struct ProgramSettings {
    bool help;
    bool version;
    std::string inputName;
    std::string outputName;
    std::string cipherKey;
    bool encrypt;
};

bool processCommandLine(const std::vector<std::string>& args,
                        ProgramSettings& settings);

#endif // MPAGSCIPHER_PROCESSCOMMANDLINE_HPP 
