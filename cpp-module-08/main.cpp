/* #include <iostream>
#include <vector>

int main(){
    // Bir int vector oluşturma
    std::vector<int> myVector;

    // Vector'e eleman ekleme
    myVector.push_back(10);
    myVector.push_back(20);
    myVector.push_back(30);

    // Vector'deki elemanları yazdırma
    for (size_t i = 0; i < myVector.size(); ++i) {
        std::cout << myVector[i] << " ";
    }
    std::cout << std::endl;

    return 0;
} */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<string> kisiler;
  kisiler.push_back("Yusuf");
  kisiler.push_back("Ramazan");
  kisiler.push_back("Sinan");
  kisiler.push_back("Mehmet");
  kisiler.push_back("Yusuf Sefa");

  cout << "Capacity: " << kisiler.capacity() << endl;
  cout << "Size: " << kisiler.size() << endl;
  kisiler.resize(10);
  kisiler.erase(kisiler.begin());
  //kisiler.erase(kisiler.begin(), kisiler.end());
  cout << "Size: " << kisiler.size() << endl;
  cout << kisiler[0] << endl;

  return 0;
}