#include <iostream>
#include <vector>
#include <cstdlib>

int main() {
    std::vector<std::string> quotes = {
            "Where we're going, we don't need roads.",
            "Great Scott!",
            "This is heavy.",
            "If my calculations are correct, when this baby hits 88 miles per hour... you're gonna see some serious shit.",
            "You've got to come back with me!",
            "Nobody calls me chicken.",
            "Save the clock tower!"
    };

    char input;
    size_t index;

    while (true) {
        std::cout << "Press Enter for a quote or 'q' to exit...";
        std::cin.get(input);

        if (input == 'q') {
            break;
        } else if (input == '\n') {
            index = std::rand() % quotes.size();
            std::cout << quotes[index] << std::endl;
        }
    }

    return 0;
}
