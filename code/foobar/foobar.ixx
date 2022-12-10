// Here we have the *main* module interface unit. This file declares the name of
// the module as well as what is exported.

export module foobar;

// We only expose the 'greet' partition of the module.
export import :greet;