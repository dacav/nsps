#include <iostream>
#include <boost/ref.hpp>

#include "canvas.hpp"

namespace euclid {

    Canvas::Canvas ()
        :   term(false),
            updated(false),
            updater(boost::ref(*this))
    {
    }

    void Canvas::stop ()
    {
        term = true;
    }

    Canvas::~Canvas ()
    {
        stop();
        updater.join();
    }

    void Canvas::operator() ()
    {
        while (!term) {
            before();
            std::cout << "redraw!" << std::endl;
            after();
        }
    }

}


