#include <iostream>
#include "ViewerFigures.hpp"


ViewerFigures::ViewerFigures(int argc, char** argv) : _kit(argc, argv)
{

  _window.set_title("Lucarne");
  _window.set_default_size(640,480);
  _window.add(_zone);
  _window.show_all();

}

void ViewerFigures::run(){

  _kit.run(_window);

}

