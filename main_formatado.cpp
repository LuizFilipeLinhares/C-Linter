#include <iostream>
#include <vector>
class DataProcessor
{
   public:
    static void process(const std::vector<int>& values)
    {
        for (const auto& value : values)
        {
            std::cout << "Valor:" << value << '\n';
        }
    }
};
int main()
{
    const DataProcessor processor;
    const std::vector<int> numbers = {1, 2, 3, 4, 5,
                                      6, 7, 8, 9, 10};
    processor.process(numbers);
    return 0;
}