#include <iostream>
#include <cstdint>

using namespace std;

class RGBA
{
public:
    RGBA() { m_red = 0; m_green = 0; m_blue = 0; m_alpha = 255; }
    RGBA(uint8_t _m_red, uint8_t _m_green, uint8_t _m_blue, uint8_t _m_alpha) : m_red(_m_red), m_green(_m_green), m_blue(_m_blue), m_alpha(_m_alpha) {}
    ~RGBA() {}
    void print() {
        cout << unsigned(m_red) << "," <<unsigned(m_green) << "," << unsigned(m_blue) << "," <<unsigned(m_alpha) << endl; }
private:
   uint8_t m_red, m_green, m_blue, m_alpha;
};
int main()
{
    RGBA R1;
    R1.print();
    RGBA R2(12, 111, 255, 255);
    R2.print();
    return 0;
}

