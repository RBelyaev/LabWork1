#include "BMPclass.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    std::string path = "C:/Users/roman/Desktop/Lena.bmp"; // sample3 pixelwhite imageFale gradient 2oUo40lvF7g
    std::string path1 = "C:/Users/roman/Desktop/Lena1.bmp";
    std::string path2 = "C:/Users/roman/Desktop/Lena2.bmp";
    std::string path3 = "C:/Users/roman/Desktop/Lena3.bmp";
    ImageBMP MyImage;

    MyImage.ReadBMPfile(path);

    MyImage.Rotation(ImageBMP::ImageState::LEFT);
    MyImage.SaveImage(path1);
    MyImage.Rotation(ImageBMP::ImageState::FLIP);
    MyImage.SaveImage(path2);

    int r = 3;

    MyImage.GaussFilter(r);
    MyImage.SaveImage(path3);
    

    return 0;
}
