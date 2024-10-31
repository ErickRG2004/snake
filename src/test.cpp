#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/color.hpp>
#include <ftxui/screen/terminal.hpp>
#include <iostream>
#include <thread>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    std::string reset_position;
    int frame = 0;
    
    
    
    
    while (true)
    {
        auto can = Canvas(300,100);
        can.DrawPointLine(50 + frame, 30, 50 + frame, 80);
        can.DrawPointLine(50 + frame, 30, 100 + frame, 30);
        can.DrawPointLine(100 + frame, 30, 100 + frame, 80);
        can.DrawPointLine(50 + frame, 80, 100 + frame, 80);
        can.DrawPointLine(50 + frame, 30, 75 + frame, 10);
        can.DrawPointLine(75 + frame, 10, 100 + frame, 30);
        can.DrawPointLine(71 + frame, 70, 79 + frame, 70);
        can.DrawPointLine(71 + frame, 80, 71 + frame, 70);
        can.DrawPointLine(79 + frame, 70, 79 + frame, 80);
        can.DrawPointLine(50 + frame, 30, 100 + frame, 30);
        can.DrawPointCircle(75 + frame, 20, 5);

        can.DrawPointCircle(0 + frame,0,10 + frame/10);
        
        can.DrawPointCircle(75 - frame,70 - frame/2,1 + frame/2);
        can.DrawPointLine(75 - frame,70,75 - frame,75 + frame);
        can.DrawPointLine(75 - frame,75,79 - frame,80 + frame);
        can.DrawPointLine(75 - frame,75,72 - frame,80 + frame);
        Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Full());
        Element lienzo = bgcolor(Color::Green, canvas(&can));
        Render(pantalla, lienzo);
        std::cout << reset_position;
        pantalla.Print();
        reset_position = pantalla.ResetPosition(true);
        this_thread::sleep_for(0.1s);
        frame++;
    }

    return 0;
}