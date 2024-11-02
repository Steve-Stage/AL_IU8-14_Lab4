#include <vector>
#include <utility>
#include <string>

float mean(const std::vector<float>&);
std::pair<float, float> minMax(const std::vector<float>&);
int argmax(const std::vector<float>&);
void sort(std::vector<float>&);
bool remove_first_negative_element(std::vector<int>&, int&);
std::string replace(const std::string&, const std::string&, const std::string&);
std::vector<std::string> split(const std::string&, char);
std::string join(const std::vector<std::string>&, const std::string&);