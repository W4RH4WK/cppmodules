// This file contains the 'greet' partition of the module.
export module foobar:greet;

// We (ab)use a dedicated partition to import all of our main dependencies to be
// used across the whole module. This is similar to having a pre-compiled header
// that gets force-included in every translation unit.
import :imports;

// The 'greet' partition depends on the 'hello' partition, as well as the string
// utils.
import :hello;
import :utils_string;

namespace foobar {

export std::string helloWorld()
{
	return utils::concat(hello(), " World!");
}

} // namespace foobar