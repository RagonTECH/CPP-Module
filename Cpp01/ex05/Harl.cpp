#include "Harl.hpp"


void Harl::debug(void)
{
	std::cout << "7XL-çift peynirli-üçlü turşu-özel-ketçaplı burgerime fazladan domuz pastırması yemeyi seviyorum. Gerçekten seviyorum!" << std::endl;
}

void Harl::info(void)
{
	std::cout <<"Ekstra domuz pastırması eklemenin daha fazla paraya mal olduğuna inanamıyorum. Burgerime yeterince pastırma koymadınız! Yapsaydınız, daha fazlasını istemezdim!"<<std::endl;
}

void Harl::warning(void)
{
	std::cout <<"Bence bedavaya fazladan pastırma yemeyi hak ediyorum. Ben yıllardır geliyorum, sen geçen aydan beri burada çalışmaya başladın."<<std::endl;
}

void Harl::error(void)
{
	std::cout <<"Bu kabul edilemez! Şimdi müdürle konuşmak istiyorum."<<std::endl;
}

void Harl::complain(std::string level)
{
	std::size_t num = 0;
    std::string cases = "DEBUG INFO WARNING ERROR";

    num = cases.find(level);
    
    if (num == std::string::npos) {
        std::cerr << "you entered an unknown level" << std::endl;
        return;
    }

    switch (num) {
        case 0:
            funcPtr = &Harl::debug;
            break;
        case 6:
            funcPtr = &Harl::info;
            break;
        case 12:
            funcPtr = &Harl::warning;
            break;
        case 19:
            funcPtr = &Harl::error;
            break;
        default:
            std::cerr << "you entered an unknown level" << std::endl;
            return;
    }

    if (funcPtr != nullptr)
        (this->*funcPtr)();
}
