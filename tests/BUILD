load("@rules_cc//cc:defs.bzl", "cc_test")

cc_test(
    name = "tests",
    srcs = glob(["**/*.cc"]),
    deps = [
        "//src/lib:CPPLib",
        "@googletest//:gtest_main",
    ],
)


cc_test(
    name = "Flatten2D_test",
    srcs = ["Flatten2D_test.cc"],
    deps = [
        "//src/lib:CPPLib",
        "@googletest//:gtest_main",
    ],
)

