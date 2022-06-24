load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "solutions",
    hdrs = [
        "solutions/A-tandem-bicycle.h",
    ]
)

cc_binary(
    name = "main",
    srcs = ["main.cpp"],
    deps = [
        ":solutions",
        "//lib:utils"
    ]
)
