/*
    Copyright 2013 Adobe
    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
*/
/*************************************************************************************************/

#ifndef ADOBE_FINAL_HPP
#define ADOBE_FINAL_HPP

#include <adobe/config.hpp>

/*************************************************************************************************/

#ifndef ADOBE_NO_DOCUMENTATION

/*************************************************************************************************/

namespace adobe {

/*************************************************************************************************/

namespace implementation {

/*************************************************************************************************/

template <typename T>
class final {
protected:
    final() {}
};

/*************************************************************************************************/

} // namespace implementation

/*************************************************************************************************/

} // namespace adobe

/*************************************************************************************************/

#endif

/*************************************************************************************************/

#define ADOBE_FINAL(T)                                                                             \
private                                                                                            \
    virtual adobe::implementation::final<T>

/*************************************************************************************************/

#endif

/*************************************************************************************************/