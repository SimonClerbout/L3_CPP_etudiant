#include <iostream>
#include <gtkmm.h>
#include <cairo.h>
#include "ZoneDessin.hpp"
#include "PolygoneRegulier.hpp"

ZoneDessin::ZoneDessin(){

  add_events(Gdk::BUTTON_PRESS_MASK);

  signal_button_press_event().connect(sigc::mem_fun(*this, &ZoneDessin::gererClic));

  
  /*_figures.push_back(new PolygoneRegulier(Couleur{255, 255, 255}, Point{200,100},80,5));*/
  /* _figures.push_back(new PolygoneRegulier(Couleur{222, 240, 255}, Point{300,200},100,8));*/
  /*_figures.push_back(new PolygoneRegulier(Couleur{200, 180, 230}, Point{300,300},50,3));*/

}


ZoneDessin::~ZoneDessin(){



}

bool ZoneDessin::on_expose_event(GdkEventExpose* event){
  
  Glib::RefPtr<Gdk::Window> window = get_window();
  if (window) {
    // récupère le contexte de dessin
    Cairo::RefPtr<Cairo::Context> context = window->create_cairo_context();
  
    for(int i = 0; i < _figures.size(); i++){

      _figures[i]->afficher(context);

    }
        // met à jour l'affichage
        context->stroke();
  }
  return true;

}
bool ZoneDessin::gererClic(GdkEventButton* event){

Glib::RefPtr<Gdk::Window> window = get_window();
  if(window){
      if(event->button == 1){
          _figures.push_back(new PolygoneRegulier(Couleur{0.8,1,0}, Point{std::floor(event->x), std::floor(event->y)}, std::rand() % 100 + 20, std::rand() % 10 + 3));
      }else if(event->button == 3){ 
          if(_figures.size() > 0)
              _figures.pop_back();
      }
    window->invalidate(true);
  }
 
  return true;

}
