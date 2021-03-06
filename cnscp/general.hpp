#ifndef CONSTANT_HPP
#define CONSTANT_HPP

#include <cstddef>
#include <cstdint>

#include <string>
#include <iostream>

namespace cnscp
{
constexpr uint64_t kRSAPrimeMax = 1000;

constexpr size_t kPILen = 1024;
constexpr size_t kOILen = 1024;

constexpr int kMerchantPort = 8888;
constexpr int kBankPort = 9999;

inline void log(const std::string &str)
{
    std::cout << str << std::endl;
}
}

#endif
