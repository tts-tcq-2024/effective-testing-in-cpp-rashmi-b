#include <iostream>
#include <assert.h>


const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
int numberOfMajorColors = sizeof(majorColor) / sizeof(majorColor[0]);
const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
int numberOfMinorColors = sizeof(minorColor) / sizeof(minorColor[0]);
int  totalColorPair = numberOfMajorColors * numberOfMinorColors;

int MaxLengthOfColor(const char* colorList[]){
    int lengthOfColor = 0;
    for(int i = 0; i < 5; i++)
        if(lengthOfColor < (int)sizeof(colorList[i]))
            lengthOfColor = (int)sizeof(colorList[i]);
    return lengthOfColor;
}

std::string addPaddingForPrint(const std::string& colour, const int length){
    std::string PrintColorString = colour;
    int colourStringLength = colour.size();
    int padding = length - colourStringLength;
    for(int i = 0; i <= padding; i++){
        PrintColorString += " ";
    }
    PrintColorString += "| ";
    return PrintColorString;
}

void printColorMap() {
    for(int majorColorIndex = 0; majorColorIndex < numberOfMajorColors; majorColorIndex++) {
        for(int minorColorIndex = 0; minorColorIndex < numberOfMinorColors; minorColorIndex++) {
            std::cout << addPaddingForPrint(std::to_string((majorColorIndex * 5 + minorColorIndex) + 1), std::to_string(totalColorPair).size())
                      << addPaddingForPrint(majorColor[majorColorIndex], MaxLengthOfColor(majorColor))
                      << minorColor[minorColorIndex] << "\n";
        }
    }
}

int main() {
    printColorMap();
    std::cout << "All is well (maybe!)\n";
    return 0;
}
