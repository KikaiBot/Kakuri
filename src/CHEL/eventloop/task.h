#pragma once

#include "CHEL/pch.h"

#include "CHEL/FatalRuntimeException.h"
#include "timeout.h"

namespace JS {
    class Task {
    public:
        Task(JsValueRef timeout, JsValueRef thisArg, JsValueRef extraArgs, bool repeat = false);
        JsValueRef Invoke();
        ~Task();

        JsValueRef timeout;
        JsValueRef args[2];
        bool excepted = false;
        int argCount = 1;
        bool repeat;
        int time;
    };
}