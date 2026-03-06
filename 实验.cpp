#include <iostream>
#include <string>

int main() {
    std::string str7 = "哈哈哈哈哈";

    std::cout << "字符串: " << str7 << std::endl;
    std::cout << "size(): " << str7.size() << std::endl;
    std::cout << "length(): " << str7.length() << std::endl;

    // 检查每个字节的值
    std::cout << "每个字节的十六进制值: ";
    for (size_t i = 0; i < str7.size(); ++i) {
        std::cout << std::hex << (static_cast<unsigned int>(str7[i]) & 0xFF) << " ";
    }
    std::cout << std::dec << std::endl;

    return 0;
}