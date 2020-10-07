#include "Uhrtype.hpp"

class UHR_169_t : public iUhrType {
public:

    uint8_t NUM_PIXELS = 169;
    uint8_t NUM_SMATRIX = 121;
    uint8_t ROWS_MATRIX = 11;
    uint8_t NUM_RMATRIX = 48;

    unsigned int matrix[11][11] = {

            {24,  23,  22,  21,  20,  19,  18,  17,  16,  15,  14},
            {27,  28,  29,  30,  31,  32,  33,  34,  35,  36,  37},
            {50,  49,  48,  47,  46,  45,  44,  43,  42,  41,  40},
            {53,  54,  55,  56,  57,  58,  59,  60,  61,  62,  63},
            {76,  75,  74,  73,  72,  71,  70,  69,  68,  67,  66},
            {79,  80,  81,  82,  83,  84,  85,  86,  87,  88,  89},
            {102, 101, 100, 99,  98,  97,  96,  95,  94,  93,  92},
            {105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115},
            {128, 127, 126, 125, 124, 123, 122, 121, 120, 119, 118},
            {131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141},
            {154, 153, 152, 151, 150, 149, 148, 147, 146, 145, 144}};

//------------------------------------------------------------------------------

    unsigned int smatrix[121] = {

            24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 50, 49, 48, 47, 46,
            45, 44, 43, 42, 41, 40, 63, 62, 61, 60, 59, 58, 57, 56, 55,
            54, 53, 76, 75, 74, 73, 72, 71, 70, 69, 68, 67, 66, 89, 88, 87, 86, 85, 84, 83, 82, 81, 80, 79, 102, 101,
            100, 99, 98, 97, 96, 95, 94, 93, 92, 115, 114, 113, 112, 111,
            110, 109, 108, 107, 106, 105, 128, 127, 126, 125, 124, 123, 122, 121, 120, 119, 118, 141, 140, 139, 138,
            137, 136, 135, 134, 133, 132, 131, 154, 153, 152, 151, 150,
            149, 148, 147, 146, 145, 144};

//------------------------------------------------------------------------------

    unsigned int rmatrix[48] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 38, 39, 64, 65, 90, 91, 116, 117, 142,
                                143, 168, 167, 166, 165, 164, 163, 162, 161, 160, 159, 158,
                                157, 156, 155, 130, 129, 104, 103, 78, 77, 52, 51, 26, 25};

//------------------------------------------------------------------------------

    unsigned int min_arr[2][4] = {

            {152, 150, 148, 146},
            {0,   12,  168, 156}};

//------------------------------------------------------------------------------

    void show(uint8_t text) const override {
        switch (text) {
            case es_ist:
                //Es
                led_set(24);
                led_set(23);

                //Ist
                led_set(21);
                led_set(20);
                led_set(19);
                break;

            case nach:
                led_set(55);
                led_set(56);
                led_set(57);
                led_set(58);
                break;

            case vor:
                led_set(59);
                led_set(60);
                led_set(61);

            case viertel:
                led_set(40);
                led_set(41);
                led_set(42);
                led_set(43);
                led_set(44);
                led_set(45);
                led_set(46);
                break;

            case fuenf:
                led_set(14);
                led_set(15);
                led_set(16);
                led_set(17);
                break;

            case zehn:
                led_set(27);
                led_set(28);
                led_set(29);
                led_set(30);
                break;
            case zwanzig:
                led_set(31);
                led_set(32);
                led_set(33);
                led_set(34);
                led_set(35);
                led_set(36);
                led_set(37);
                break;

            case halb:
                led_set(73);
                led_set(74);
                led_set(75);
                led_set(76);
                break;

            case eins:
                led_set(81);
                led_set(82);
                led_set(83);
                led_set(84);
                break;

            case uhr:
                led_set(138);
                led_set(139);
                led_set(140);
                break;

            case h_ein:
                led_set(81);
                led_set(82);
                led_set(83);
                break;

            case h_zwei:
                led_set(79);
                led_set(80);
                led_set(81);
                led_set(82);
                break;

            case h_drei:
                led_set(98);
                led_set(99);
                led_set(100);
                led_set(101);
                break;

            case h_vier:
                led_set(112);
                led_set(113);
                led_set(114);
                led_set(115);
                break;

            case h_fuenf:
                led_set(92);
                led_set(93);
                led_set(94);
                led_set(95);
                break;

            case h_sechs:
                led_set(132);
                led_set(133);
                led_set(134);
                led_set(135);
                led_set(136);
                break;

            case h_sieben:
                led_set(84);
                led_set(85);
                led_set(86);
                led_set(87);
                led_set(88);
                led_set(89);
                break;

            case h_acht:
                led_set(124);
                led_set(125);
                led_set(126);
                led_set(127);
                break;

            case h_neun:
                led_set(108);
                led_set(109);
                led_set(110);
                led_set(111);
                break;

            case h_zehn:
                led_set(120);
                led_set(121);
                led_set(122);
                led_set(123);
                break;

            case h_elf:
                led_set(105);
                led_set(106);
                led_set(107);
                break;

            case h_zwoelf:
                led_set(67);
                led_set(68);
                led_set(69);
                led_set(70);
                led_set(71);
                break;
        };
    };

};