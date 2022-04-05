name = "ddraw7fix"

workspace (name)
    configurations {"Debug", "Release"}
    platforms {"Win32"}

project ("ddraw7fix")
    kind "SharedLib"
    toolset "v143"
    language "C++"
    cppdialect "C++20"
    characterset "MBCS"
    callingconvention "Cdecl"
    files { 
        "ddraw7fix.cc",
        "loguru.cpp",
        "loguru.h",
        "detours/*.cpp",
        "detours/*.h",
        "proxy/*.cpp",
        "proxy/*.h",
    }
    flags { "MultiProcessorCompile", "NoMinimalRebuild" }
    removefiles { "detours/uimports.cpp", }
    defines { 
        "WIN32_LEAN_AND_MEAN",
        "_WIN32",
        "_CRT_SECURE_NO_WARNINGS",
        "_WINSOCK_DEPRECATED_NO_WARNINGS",
        "_USE_32BIT_TIME_T",
        "_USRDLL",
        "_WIN32_WINNT=0x0600",
        "_WINDLL",
        "_WINDOWS",
        "DDRAW7FIX"
    }
    filter {"platforms:Win32"}
        system "Windows"
        architecture "x86"
    filter {"configurations:Debug"}
        defines { "_DEBUG" }
        optimize "Debug"
        symbols "On"
    filter {"configurations:Release"}
        defines { "NDEBUG" }
        optimize "Speed"
