# - Build sub-script for the MPAGSCipher library unit tests

# Most basic tests
add_executable(testHello testHello.cpp)
add_test(NAME test-hello COMMAND testHello)