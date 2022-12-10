export module foobar:imports;

export import <string>;

// Note that defining FMT_HEADER_ONLY here has no effect on the imported header.
// It is set via CMake's target_compile_definitions instead.
export import <fmt/format.h>;

// Cycle imports are not possible with modules :(
//export import :utils_string;