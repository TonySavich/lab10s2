#include <iostream>
#include <BMP.hpp>

int main()
{
    try
    {
        images::BMP test_bmp(339, 481);
      // test_bmp.Fill({ 0,255,0 });

      //  images::BMP test_bmp;
        test_bmp.Open("int.bmp");
        test_bmp.Rotate(acos(-1) / 4);
        test_bmp.errordelete();
        test_bmp.Save("out.bmp");
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
