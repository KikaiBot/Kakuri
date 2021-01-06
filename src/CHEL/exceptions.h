#pragma once

#include "runtime.h"
#include "pch.h"

namespace JS::Exceptions {
    /**
     * @brief Throw an invalid argument exception
     */
    void InvalidArgument();

    /**
     * @brief Throw a constructor not called with new exception
     */
    void ClassNewKeyword();
}