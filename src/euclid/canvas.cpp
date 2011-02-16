#include <boost/ref.hpp>

#include "canva.hpp"

namespace eculid {

    Canvas::Canvas ()
        :   term(false),
            updated(false),
            updater(boost::ref(*this))
    {
    }

    void Canvas::stop ()
    {
    }

    Canvas::~Canvas ()
    {
    }

    void operator() ()
    {
    }

}


