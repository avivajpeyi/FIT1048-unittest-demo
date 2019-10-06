[![Build Status](https://travis-ci.org/avivajpeyi/fit1048-unittest-demo.svg?branch=master)](https://travis-ci.org/avivajpeyi/fit1048-unittest-demo/builds)

[![Coverage Status](https://coveralls.io/repos/avivajpeyi/fit1048-unittest-demo/badge.png?branch=master)](https://coveralls.io/r/avivajpeyi/fit1048-unittest-demo?branch=master)

###### [Uses Craig Scott's approach](https://crascit.com/2015/07/25/cmake-gtest/)
# Unit Test Demo with Google Test

C/C++ unit test demo using [Google Test] deployed to
[Travis-CI] with test coverage deployed to [Coveralls].
- [Test History]
- [Code Coverage]




## How to build project

```bash
git clone https://github.com/avivajpeyi/fit1048-unittest-demo.git
cd fit1048-unittest-demo
mkdir build
cd build
cmake ..
cmake --build .
```


## Running the tests

Either using `ctest`:
```bash
ctest
```

```
Running tests...
Test project /home/user/fit1048-unittest-demo/build
    Start 1: unit
1/1 Test #1: unit .............................   Passed    0.00 sec

100% tests passed, 0 tests failed out of 1

Total Test time (real) =   0.00 sec
```

Or directly using `unit_tests`:
```bash
./bin/unit_tests
```

```
[==========] Running 2 tests from 1 test case.
[----------] Global test environment set-up.
[----------] 2 tests from example
[ RUN      ] example.add
[       OK ] example.add (0 ms)
[ RUN      ] example.subtract
[       OK ] example.subtract (0 ms)
[----------] 2 tests from example (1 ms total)

[----------] Global test environment tear-down
[==========] 2 tests from 1 test case ran. (1 ms total)
[  PASSED  ] 2 tests.

```

[Google Test]: https://code.google.com/p/googletest
[Travis-CI]: https://travis-ci.org/avivajpeyi/fit1048-unittest-demo/builds
[Coveralls]: https://coveralls.io
[Code Coverage]:https://coveralls.io/r/avivajpeyi/fit1048-unittest-demo
[Test History]: https://travis-ci.org/avivajpeyi/fit1048-unittest-demo/builds


