#ifndef __defined_canvas_hpp
#define __defined_canvas_hpp

#include <boost/thread.hpp>

namespace eculid {

    class Canvas
    {
        public:
            Canvas ();
            virtual ~Canvas ();

            void stop ();

        private:
            bool term;
            bool updated;

            friend boost::thread;
            boost::thread updater;

            //boost::condition_variable sync;

            /* Implementation depending on specific canvas to be used */
            virtual void redraw () = 0;

            void operator() ();
    }

}

#endif // __defined_canvas_hpp

