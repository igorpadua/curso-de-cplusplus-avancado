#include <gtkmm.h>

int main( int argc, char** argv ){
    Gtk::Main kit( argc, argv );
    Gtk::Window window;
    window.set_default_size( 600 , 400 );
    window.set_title("Primeiro Exemplo Básico de GTK+ com gtkmm para o C++ !!!");
    
    Gtk::Label label;
    label.set_text("Olá, biblioteca gtkmm estou desenhando uma palavra nessa janela.");
    window.add( label );
    
    window.show_all();
    
    
    Gtk::Main::run( window );
    return 0;
}

// COMPILE: g++ simple-gtk.cpp -o simple $(pkg-config gtkmm-3.0 --cflags --libs)
