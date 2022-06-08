load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "solutions",
    hdrs = [
        "solutions/A-two-number-sum.h",
        "solutions/B-two-number-sum.h",
        "solutions/C-two-number-sum.h"
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
