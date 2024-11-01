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

    
        while (frame <= 300)
        {
            auto can = Canvas(300, 100);
            //lineas de casa
            can.DrawPointLine(50 + frame, 30, 50 + frame, 80);
            can.DrawPointLine(50 + frame, 30, 100 + frame, 30);
            can.DrawPointLine(100 + frame, 30, 100 + frame, 80);
            can.DrawPointLine(50 + frame, 80, 100 + frame, 80);
            can.DrawPointLine(50 + frame, 30, 75 + frame, 10);
            can.DrawPointLine(75 + frame, 10, 100 + frame, 30);
            can.DrawPointLine(71 + frame, 70, 79 + frame, 70);
            can.DrawPointLine(79 + frame, 70, 79 + frame, 80);
            can.DrawPointLine(78 + frame, 70, 78 + frame, 80);
            can.DrawPointLine(77 + frame, 70, 77 + frame, 80);
            can.DrawPointLine(76 + frame, 70, 76 + frame, 80);
            can.DrawPointLine(75 + frame, 70, 75 + frame, 80);
            can.DrawPointLine(74 + frame, 70, 74 + frame, 80);
            can.DrawPointLine(73 + frame, 70, 73 + frame, 80);
            can.DrawPointLine(72 + frame, 70, 72 + frame, 80);
            can.DrawPointLine(71 + frame, 70, 71 + frame, 80);
            can.DrawPointLine(50 + frame, 30, 100 + frame, 30);
            can.DrawPointCircleFilled(75 + frame, 20, 5);

            //Lineas de Ventana Izquierda
            can.DrawPointLine(60 + frame, 40, 70 + frame, 40);
            can.DrawPointLine(60 + frame, 40, 60 + frame, 50);
            can.DrawPointLine(70 + frame, 40, 70 + frame, 50);
            can.DrawPointLine(60 + frame, 50, 70 + frame, 50);
            can.DrawPointLine(65 + frame, 40, 65 + frame, 50);
            can.DrawPointLine(60 + frame, 45, 70 + frame, 45);

            //Lineas de Ventana Derecha
            can.DrawPointLine(80 + frame, 40, 90 + frame, 40);
            can.DrawPointLine(80 + frame, 40, 80 + frame, 50);
            can.DrawPointLine(90 + frame, 40, 90 + frame, 50);
            can.DrawPointLine(80 + frame, 50, 90 + frame, 50);
            can.DrawPointLine(85 + frame, 40, 85 + frame, 50);
            can.DrawPointLine(80 + frame, 45, 90 + frame, 45);

            //SOL
            can.DrawPointCircle(0 + frame / 5, 0, 15);

            //Lineas de personaje
            can.DrawPointCircleFilled(75 - frame / 10, 70 + frame / 20, 1 + frame / 20);
            can.DrawPointLine(75 - frame / 10, 70, 75 - frame / 10, 75 + frame / 5);
            can.DrawPointLine(75 - frame / 10, 75, 79 - frame / 10, 80 + frame / 10);
            can.DrawPointLine(75 - frame / 10, 75, 72 - frame / 10, 80 + frame / 10);
            can.DrawPointLine(75 - frame / 10, 80 + frame / 8, 79 - frame / 10, 85 + frame / 8);
            can.DrawPointLine(75 - frame / 10, 80 + frame / 8, 72 - frame / 10, 85 + frame / 8);

            //Lineas de Nube1
            can.DrawPointCircleFilled(150 - frame / 8, -10, 12);
            can.DrawPointCircleFilled(158 - frame / 8, -5, 12);

            //Lineas de Nube2
            can.DrawPointCircleFilled(20 - frame / 6, 7, 4);
            can.DrawPointCircleFilled(15 - frame / 6, 7, 4);
            can.DrawPointCircleFilled(10 - frame / 6, 7, 4);
            can.DrawPointCircleFilled(17 - frame / 6, 4, 4);
            can.DrawPointCircleFilled(12 - frame / 6, 4, 4);

            //Lineas de Nube3
            can.DrawPointCircleFilled(35 - frame / 6, 3, 4);
            can.DrawPointCircleFilled(30 - frame / 6, 3, 4);
            can.DrawPointCircleFilled(25 - frame / 6, 3, 4);
            can.DrawPointCircleFilled(32 - frame / 6, 1, 4);
            can.DrawPointCircleFilled(27 - frame / 6, 1, 4);

            //Linea de Banqueta
            can.DrawPointLine(0, 90, 300, 90);

            //Lineas de Arbol1
            can.DrawPointLine(25 + frame, 85, 25 + frame, 70);
            can.DrawPointLine(25 + frame, 81, 35 + frame, 75);
            can.DrawPointLine(25 + frame, 77, 15 + frame, 71);
            can.DrawPointLine(25 + frame, 73, 35 + frame, 77);
            can.DrawPointCircleFilled(15 + frame, 71, 2);
            can.DrawPointCircleFilled(35 + frame, 77, 2);
            can.DrawPointCircleFilled(35 + frame, 75, 2);
            can.DrawPointCircleFilled(25 + frame, 70, 2);

            //Lineas de Arbol2
            can.DrawPointLine(5 + frame, 70, 5 + frame, 60);
            can.DrawPointLine(5 + frame, 66, 15 + frame, 60);
            can.DrawPointLine(5 + frame, 62, -5 + frame, 56);
            can.DrawPointLine(5 + frame, 57, 15 + frame, 51);
            can.DrawPointCircleFilled(5 + frame, 60, 2);
            can.DrawPointCircleFilled(15 + frame, 60, 2);
            can.DrawPointCircleFilled(-5 + frame, 56, 2);
            can.DrawPointCircleFilled(15 + frame, 51, 2);

            //Lineas de Arbol3
            can.DrawPointLine(-25 + frame, 85, -25 + frame, 60);
            can.DrawPointLine(-25 + frame, 81, -10 + frame, 60);
            can.DrawPointLine(-25 + frame, 77, -40 + frame, 56);
            can.DrawPointLine(-25 + frame, 73, -10 + frame, 51);
            can.DrawPointCircleFilled(-25 + frame, 60, 2);
            can.DrawPointCircleFilled(-10 + frame, 60, 2);
            can.DrawPointCircleFilled(-40 + frame, 56, 2);
            can.DrawPointCircleFilled(-10 + frame, 51, 2);

            Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Full());
            Element lienzo = bgcolor(Color::Green, canvas(&can));
            Render(pantalla, lienzo);
            std::cout << reset_position;
            pantalla.Print();
            reset_position = pantalla.ResetPosition(false);
            this_thread::sleep_for(0.1s);
            frame++;
        }
        

    return 0;
}