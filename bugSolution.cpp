#include <vector>
#include <iostream>

int main() {
  std::vector<bool> vec(10);
  size_t index = 12; // Index out of bounds

  // Safe access using at()
  try {
    bool b = vec.at(index);
    std::cout << "Value at index " << index << ": " << b << std::endl;
  } catch (const std::out_of_range& oor) {
    std::cerr << "Out of Range error: " << oor.what() << std::endl;
  }

  // Safe access with bounds checking
  if (index < vec.size()) {
      bool b = vec[index];
      std::cout << "Value at index " << index << ": " << b << std::endl;
  } else {
      std::cerr << "Index out of bounds" << std::endl;
  }
  return 0;
} 