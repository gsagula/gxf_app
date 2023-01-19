
_workspace_name = "usd_extension"
workspace(name = _workspace_name)

local_repository(name = "com_extension_dev", path = "/opt/nvidia/graph-composer/extension-dev")

load("@com_extension_dev//build:graph_extension.bzl", "graph_nvidia_extension")
load("@com_extension_dev//build/toolchain:toolchain.bzl", "toolchain_configure")
load("@bazel_tools//tools/build_defs/repo:git.bzl", "new_git_repository")
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

toolchain_configure(name = "toolchain")

new_git_repository(
    name = "yaml-cpp",
    build_file = "@com_extension_dev//build:third_party/yaml-cpp.BUILD",
    commit = "9a3624205e8774953ef18f57067b3426c1c5ada6",
    remote = "https://github.com/jbeder/yaml-cpp.git",
    shallow_since = "1569430560 -0700",
)

http_archive(
    name = "rules_python",
    url = "https://github.com/bazelbuild/rules_python/releases/download/0.1.0/rules_python-0.1.0.tar.gz",
    sha256 = "b6d46438523a3ec0f3cead544190ee13223a52f6a6765a29eae7b7cc24cc83a0",
)

http_archive(
    name = "com_nvidia_usd",
    url = "https://developer.nvidia.com/downloads/usdusdbinaries2211usdpy37linu-8664usdviewrelease02211-tc55v22110c7b9a95zip",
    sha256 = "000bf36e4bc25784a14d23d1cf03de525588d7764e4e4bfed2a9a65c2bc9676b",
    type = "zip",
    build_file = "//third_party:BUILD.com_nvidia_usd",
)

graph_nvidia_extension(
    name = "StandardExtension",
    version = "2.0.0",
)
