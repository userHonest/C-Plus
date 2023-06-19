#include <iostream>
#include <map>
#include <string>

int main() {
  // Morse code dictionary
  std::map<char, std::string> morse_code = {
      {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."}, {'E', "."},
      {'F', "..-."}, {'G', "--."}, {'H', "...."}, {'I', ".."}, {'J', ".---"},
      {'K', "-.-"}, {'L', ".-.."}, {'M', "--"}, {'N', "-."}, {'O', "---"},
      {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"},
      {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"}, {'Y', "-.--"},
      {'Z', "--.."}, {'1', ".----"}, {'2', "..---"}, {'3', "...--"},
      {'4', "....-"}, {'5', "....."}, {'6', "-...."}, {'7', "--..."},
      {'8', "---.."}, {'9', "----."}, {'0', "-----"}, {',', "--..--"},
      {'.', ".-.-.-"}, {'?', "..--.."}, {'/', "-..-."}, {'-', "-....-"},
      {'(', "-.--."}, {')', "-.--.-"}
  };

  // Get the input string from the user
  std::string input_string;
  std::cout << "Enter a string: ";
  std::getline(std::cin, input_string);

  // Generate the Morse code
  std::string output;
  for (char c : input_string) {
    c = toupper(c);
    if (morse_code.count(c) > 0) {
      output += morse_code[c];
      output += " ";
    } else {
      output += c;
      output += " ";
    }
  }

  // Display the result
  std::cout << "Morse code: " << output << std::endl;

  return 0;
}

