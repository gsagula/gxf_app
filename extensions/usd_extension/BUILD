load("@com_extension_dev//build:graph_extension.bzl", "graph_cc_extension")
load("@com_extension_dev//build:registry.bzl", "register_extension")

package(
    default_visibility = ["//visibility:public"],
)

exports_files(["LICENSE"])

graph_cc_extension(
    name = "usd_extension",
    srcs = [
        "usd_codelet.cpp",
        "usd_extension.cpp",
    ],
    hdrs = [
        "usd_codelet.hpp",
    ],
    deps = [
        "@StandardExtension",
        "@com_nvidia_usd//:usd",
    ],
)

register_extension(
    name = "register_usd_extension_ext",
    badges = [""],
    extension = "usd_extension",
    labels = [
        "nvidia",
        "gpu",
    ],
    license = "LICENSE",
    license_file = ":LICENSE",
    ngc_dependencies = {
        "StandardExtension": "2.0.0",
    },
    priority = "1",
    git_repository = "",
    url = "www.example.com",
    uuid = "0f33c3a8-3764-3bf3-b49a-7acf301d9de3",
    version = "1.0.0",
    visibility = ["//visibility:public"],
    headers = [
        "@com_nvidia_usd//:headers",
    ],
    binaries = [
        "@com_nvidia_usd//:binaries",
    ],
    python_sources = [
        "@com_nvidia_usd//:python_sources",
    ],
    python_bindings = [
        "@com_nvidia_usd//:python_binaries",
    ],
)
