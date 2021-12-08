#include <thread>
#include <chrono>
#include <windows.h>

#include "../include/API.hpp"

#include "sol/sol.hpp"

lua_State* g_lua = nullptr;

void on_lua_state_created(lua_State* l) {
    g_lua = l;

    auto state_view = sol::state_view(l);

    state_view["LoadLibrary"] = &LoadLibraryA;

    MessageBox(NULL, "Lua State Created", "DLL", MB_OK);
}

void on_lua_state_destroyed(lua_State* l) {
    g_lua = nullptr;

    MessageBox(NULL, "Lua State Destroyed", "DLL", MB_OK);
}

void on_frame() {
    OutputDebugString("Example Frame");
}

void on_pre_begin_rendering() {
    OutputDebugString("Example Pre Begin Rendering");
}

void on_post_end_rendering() {
    OutputDebugString("Example Post End Rendering");
}

void startup_thread() {
    MessageBox(NULL, "Hello from the DLL!", "DLL", MB_OK);

    reframework_on_lua_state_created(on_lua_state_created);
    reframework_on_lua_state_destroyed(on_lua_state_destroyed);
    reframework_on_frame(on_frame);
    reframework_on_pre_application_entry("BeginRendering", on_pre_begin_rendering);
    reframework_on_post_application_entry("EndRendering", on_post_end_rendering);
}

BOOL APIENTRY DllMain(HANDLE handle, DWORD reason, LPVOID reserved) {
    if (reason == DLL_PROCESS_ATTACH) {
        HMODULE temp{};

        // pins the DLL to the process
        // because we have no way of removing callbacks yet
        GetModuleHandleEx(
            GET_MODULE_HANDLE_EX_FLAG_PIN | GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS,
            (LPCSTR)handle,
            &temp
        );

        CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)startup_thread, nullptr, 0, nullptr);
    }

    return TRUE;
}