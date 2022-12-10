// Instead of defining a new module (like foobar.utils) we prefix the partition
// name instead. This way we can still access other partitions of the module.
//
// Note that, despite this file being located in a subdirectory, we can still
// access other module partitions regularly.
export module foobar:utils_string;

import :imports;

// Namespaces are completely independent of module and partition names. However,
// it seems like a good idea to use the module name for the outermost namespace.
namespace foobar::utils {

// Just some random string utility showing off third-party imports.
export std::string concat(const std::string& a, const std::string& b)
{
	return fmt::format("{} {}", a, b);
}

} // namespace foobar::utils
