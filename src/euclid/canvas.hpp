#ifndef __defined_canvas_hpp
#define __defined_canvas_hpp

#include <boost/thread.hpp>

namespace euclid {

    class Canvas
    {
        public:
            Canvas ();
            virtual ~Canvas ();

            void stop ();
            void operator() ();

        private:
            bool term;
            bool updated;

            boost::thread updater;

            /** Before redrawing.
             *
             * By default the method does nothing. Overload if required.
             *
             * @note This methond may be used to catch user events on the
             *       canvas (like mouse clicks or gestures).
             */
            virtual void before () {};

            /** After redrawing.
             *
             * By default the method does nothing. Overload if required.
             */
             virtual void after () {};

    };

}

#endif // __defined_canvas_hpp

