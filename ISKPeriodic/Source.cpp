#include"ISKPeriodic.h"

int main()
{

	std::string text1 = "abcabcabcabc";
	std::string text2 = "abcabcabcab";
	std::string text3 = "abcabcabcabd";
	std::string text4 = "abcababcababcab";
	std::cout << "text1 K=3 " << IskPeriodic(text1, 3) << std::endl;
	std::cout << "text2 K=3 " << IskPeriodic(text2, 3) << std::endl;
	std::cout << "text3 K=3 " << IskPeriodic(text3, 3) << std::endl;
	std::cout << "text4 K=5 " << IskPeriodic(text4, 5) << std::endl;
	std::cout << "text4 K=4 " << IskPeriodic(text4, 4) << std::endl;
	return 0;
}