//========< MorseTranslator.cpp >========= //
// Description: From string to morse code 
// Author: u$3r_h0n3$t
// Version: 1.0
// Updated: 20.06.23
// ======================================= //

// ====< Libraries > ============ // 
#include <iostream>
#include <map>
#include <string>

// main function // 
int main() {
  //===  Morse code dictionary === /// 
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

  // === Get the input string from the user == // 
  std::string input_string;
  std::cout << "Enter a string: ";
  std::getline(std::cin, input_string);

  // ==  Generate the morse code == // 
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

  // === Print result on screen === // 
  std::cout << "Morse code: " << output << std::endl;

  return 0;
}

//==== end of file  ===== // 

