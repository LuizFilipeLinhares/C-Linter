#include <iostream>
#include <vector>
class DataProcessor{public:
    static void Process(const std::vector<int>& Values)
    {
        for (const auto& value : Values)
        {
            std::cout << "Valor:" << value << '\n';
        }
    }
};
int main(){const DataProcessor processor;
    const std::vector<int> NUMBERS = {1, 2, 3, 4, 5,
                                      6, 7, 8, 9, 10};
    DataProcessor::Process(NUMBERS);
    return 0;
}