cmake_minimum_required( VERSION 3.0 )
project( TP_CPP )
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -Wextra" )
set( CMAKE_BUILD_TYPE Debug )

find_package( PkgConfig REQUIRED )
pkg_check_modules( PKG REQUIRED gtkmm-2.4 cpputest )
include_directories( ${PKG_INCLUDE_DIRS} )

add_executable( main_doubler21.out src/main_doubler21.cpp 
    src/Doubler.cpp )
target_link_libraries( main_doubler21.out ${PKG_LIBRARIES} )

#add_executable( main_polygone src/PolygoneRegulier.cpp 
#    src/Ligne.cpp 
#    src/FigureGeometrique.cpp
#    src/main_polygone.cpp)

add_executable( main_window src/main_window.cpp src/ViewerFigures.cpp src/ZoneDessin.cpp src/FigureGeometrique.cpp src/PolygoneRegulier.cpp src/Ligne.cpp)
target_link_libraries( main_window ${PKG_LIBRARIES} )


