#include <iostream>
#include <fstream>
#include <string>

void myReplace(std::string& fileContent, const std::string& oldStr, const std::string& newStr) 
{
    size_t pos = 0;
    while ((pos = fileContent.find(oldStr, pos)) != std::string::npos) 
    {
        fileContent.erase(pos, oldStr.length()); // Eski dizeyi sil
        fileContent.insert(pos, newStr); // Yeni dizeyi ekle
        pos += newStr.length(); // Pozisyonu yeni dizinin sonuna getir
    }
}

void changeString(const std::string& filename, const std::string& s1, const std::string& s2)
{
    std::ifstream inFile(filename);
    if (!inFile)
    {
        std::cout << "There is no file please create first: " << filename << std::endl;
        return;
    }

    std::string fileContent;
    std::string line;
    while (std::getline(inFile, line))
        fileContent += line + "\n";
    inFile.close();

    myReplace(fileContent, s1, s2);
    
    std::ofstream outFile(filename + ".replace");
    if (!outFile)
    {
        std::cout << "Your replace file could not be created." << std::endl;
        return;
    }

    outFile << fileContent;
    outFile.close();
}

int main(int argc, char** argv)
{
    if (argc != 4)
    {
        std::cout << "You have to enter file name, string you wanna change and new string." << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    changeString(filename, s1, s2);
    return 0;
}
