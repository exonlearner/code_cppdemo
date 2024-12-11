#include<iostream>
#include <string>

class SentenceReverser {
public:
    void reverseSentence(const std::string &sentence) {
        reverseSentenceHelper(sentence, sentence.length() - 1);
    }

private:
    void reverseSentenceHelper(const std::string &sentence, int index) {
        if (index < 0) {
            return;
        }
        int end = index;
        while (index >= 0 && sentence[index] != ' ') {
            index--;
        }
        std::cout << sentence.substr(index + 1, end - index) << " ";
        reverseSentenceHelper(sentence, index - 1);
    }
};

int main() {
    SentenceReverser reverser;
    std::string sentence;

    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);

    reverser.reverseSentence(sentence);
    std::cout << std::endl;

    return 0;
}