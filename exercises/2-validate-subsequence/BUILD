load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "solutions",
    hdrs = [
        "solutions/A-validate-subsequence.h",
        "solutions/B-validate-subsequence.h"
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
