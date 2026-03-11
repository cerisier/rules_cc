# CUDA Rule-based Toolchains
This example showcases a fully working rule-based toolchain for Linux with
`.cu` support through `cuda-compile` actions.

The complete toolchain configuration lives [here](https://github.com/bazelbuild/rules_cc/tree/main/examples/cuda_rule_based_toolchain/toolchains).

# Trying the example
From this directory, you can run example tests that build using this toolchain
with the following command:
```
$ bazel test //...
```

This example currently only supports Linux.

Note: toolchain-level `.cu` to `cuda-compile` routing knob
(`map_cu_to_cuda_compile_action`) is Bazel 9+ only.
On Bazel 8.x compatibility mode, `.cu` routing still follows native cc_common behavior.

The `//:quick_test` target validates mixed `.cu` and `.cc` compilation/linking.

To inspect action routing directly:

```
$ bazel aquery 'mnemonic("CppCompile", //:quick_test)'
```

By default, it will build with `clang`. To use `gcc`, try the following command:

```
$ bazel test --config=gcc //...
```
